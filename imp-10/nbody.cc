#include <cmath>
#include <cstdio>
#include <omp.h>

// (Sub-optimum) Array of Structure - good OOP. Bad Performance.
// Structure of individual particle
//struct ParticleType { 
//  float x, y, z;
//  float vx, vy, vz; 
//};

// (Optimum) Structure of Array - bad OOP. Good performance.
struct ParticleSetType {
  float *x, *y, *z;
  float *vx, *vy, *vz;
};

// define a function that moves each particle due to interaction with other particles
void MoveParticles(const int nParticles, ParticleSetType & particle, const float dt) {

  const int TILE = 16;

#pragma omp parallel for
  // Loop over particles that experience force
  for (int ii = 0; ii < nParticles; ii+=TILE) {

    // Components of the gravity force on particle i
    float Fx[TILE], Fy[TILE], Fz[TILE]; 
     Fx[0:TILE] = Fy[0:TILE]  = Fz[0:TILE] = 0.0f;
    
     // Loop over particles that exert force: vectorization expected here
#pragma unroll(TILE)
    for (int j = 0; j < nParticles; j++) { 
    
#pragma vector aligned
      // How much data in this tiled loop?
      // 16 (particles in a tile) * 3 floats * 4 bytes per floats = 192 bytes
      // enough to fit in the L1 Cache registery 
      for (int i = ii; i < ii+TILE; i++) {   
      
	// Avoid singularity and interaction with self
	const float softening = 1e-20;

	// Newton's law of universal gravity
	const float dx = particle.x[j] - particle.x[i];
	const float dy = particle.y[j] - particle.y[i];
	const float dz = particle.z[j] - particle.z[i];
	const float drSquared  = dx*dx + dy*dy + dz*dz + softening;
      
	const float oodr = 1.0f/sqrtf(drSquared);
	const float drPowerN3 = oodr*oodr*oodr;
      
	// Calculate the net force
	// Assume mass is 1 (for ease of computation)
	// F = ma = 1*a = a
	Fx[i-ii] += dx * drPowerN3;  // scalar tuning
	Fy[i-ii] += dy * drPowerN3;  // scalar tuning
	Fz[i-ii] += dz * drPowerN3;  // scalar tuning
      }
    }

    // Accelerate particles in response to the gravitational force
    // Note: 1st order Euler Approximation.
    // http://spiff.rit.edu/classes/phys317/lectures/euler.html
    particle.vx[ii:TILE] += dt*Fx[0:TILE]; 
    particle.vy[ii:TILE] += dt*Fy[0:TILE]; 
    particle.vz[ii:TILE] += dt*Fz[0:TILE];
  }

#pragma omp parallel for
  // Move particles according to their velocities
  for (int i = 0 ; i < nParticles; i++) { 
    particle.x[i]  += particle.vx[i]*dt;
    particle.y[i]  += particle.vy[i]*dt;
    particle.z[i]  += particle.vz[i]*dt;
  }

}

// Do it!
int main(const int argc, const char *argv[]) {

  // Problem size and other parameters
  const int nParticles = (argc > 1 ? atoi(argv[1]) : 16384);
  const int nSteps = 10;  // Duration of test
  const float dt = 0.01f; // Particle propagation time step

  // Particle data stored as an Array of Structures (AoS)
  // this is good object-oriented programming style,
  // but inefficient for the purposes of vectorization
  //ParticleType *particle = new ParticleType[nParticles];

  // Structure of Array (SoA) style
  // bad OOP style. But very efficient in terms of performance.
  ParticleSetType particle;

  // use Intel _mm_malloc to create objects that are stored on aligned memory.
  // For KNL, needs to align to start at multiple of 64 bytes.
  // use _mm_free to deallocate
  particle.x = (float*) _mm_malloc(sizeof(float)*nParticles, 64);
  particle.y = (float*) _mm_malloc(sizeof(float)*nParticles, 64);;
  particle.z = (float*) _mm_malloc(sizeof(float)*nParticles, 64);;
  particle.vx = (float*) _mm_malloc(sizeof(float)*nParticles, 64);;
  particle.vy = (float*) _mm_malloc(sizeof(float)*nParticles, 64);;
  particle.vz = (float*) _mm_malloc(sizeof(float)*nParticles, 64);;

  // Initialize random number generator and particles
  srand(0);
  for(int i = 0; i < nParticles; i++) {
    particle.x[i] = rand()/RAND_MAX;
    particle.y[i] = rand()/RAND_MAX;
    particle.z[i] = rand()/RAND_MAX;
    particle.vx[i] = rand()/RAND_MAX;
    particle.vy[i] = rand()/RAND_MAX;
    particle.vz[i] = rand()/RAND_MAX;
  }
  
  // Perform benchmark
  const int version = 10; // implementation version - update as needed
  printf("\n\033[1mNBODY Version %d\033[0m\n", version);
  const int num_threads = omp_get_max_threads();
  printf("\nPropagating %d particles using %d threads on %s...\n\n",
	 nParticles, num_threads,

#ifndef __MIC__
	 "CPU"
#else
	 "MIC"
#endif
	 );

  // Benchmarking data
  // rate and duration are for computing overall average performance and duration
  // dRate and dDuration are for computing the short-cut standard diviation later.
  double rate = 0, dRate = 0, duration = 0, dDuration = 0;

  // Skip first few steps in the computation of average performance. Likely warm-up on Xeon Phi processor
  const int skipSteps = 3; 
  printf("\033[1m%5s %10s %10s %8s\033[0m\n", "Step", "Time, s", "Interact/s", "GFLOP/s");
  fflush(stdout);
  for (int step = 1; step <= nSteps; step++) {

    const double tStart = omp_get_wtime(); // Start timing
    MoveParticles(nParticles, particle, dt);
    const double tEnd = omp_get_wtime(); // End timing

    // Estimate total interactions and GFLOPS consumed
    const float HztoInts   = float(nParticles)*float(nParticles-1) ;
    const float HztoGFLOPs = 20.0*1e-9*float(nParticles)*float(nParticles-1);

    // For average performance and short-cut method standard deviation computation
    if (step > skipSteps) { // Collect statistics
      rate  += HztoGFLOPs/(tEnd - tStart);
      dRate += HztoGFLOPs*HztoGFLOPs/((tEnd - tStart)*(tEnd-tStart)); 
      duration += (tEnd - tStart);
      dDuration += (tEnd - tStart)*(tEnd - tStart);
    }

    printf("%5d %10.3e %10.3e %8.1f %s\n", 
	   step, (tEnd-tStart), HztoInts/(tEnd-tStart), HztoGFLOPs/(tEnd-tStart), (step<=skipSteps?"*":""));
    fflush(stdout);
  }

  // Compute the short-cut method standard deviaion.
  rate/=(double)(nSteps-skipSteps); 
  dRate=sqrt(dRate/(double)(nSteps-skipSteps)-rate*rate);
  duration/=(double)(nSteps-skipSteps);
  dDuration=sqrt(dDuration/(double)(nSteps-skipSteps)-duration*duration);

  printf("-----------------------------------------------------\n");
  printf("\033[1m%s %4s \033[42m%10.1f +- %.1f GFLOP/s\033[0m\n",
	 "Average performance:", "", rate, dRate);
  printf("\033[1m%s %4s \033[42m%10.3e +- %10.3e s\033[0m\n",
	 "Average duration:", "", duration, dDuration);
printf("\033[1m%s %4s \033[42m%.3f +- %.3f ms\033[0m\n",
	 "Average duration:", "", duration*1000.0, dDuration*1000.0);
  printf("-----------------------------------------------------\n");
  printf("* - warm-up, not included in average\n\n");
  
  // free memory
  _mm_free(particle.x);
  _mm_free(particle.y);
  _mm_free(particle.z);
  _mm_free(particle.vx);
  _mm_free(particle.vy);
  _mm_free(particle.vz);
}



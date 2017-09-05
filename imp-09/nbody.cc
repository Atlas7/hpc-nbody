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

#pragma omp parallel for
  // Loop over particles that experience force
  for (int i = 0; i < nParticles; i++) { 

    // Components of the gravity force on particle i
    float Fx = 0, Fy = 0, Fz = 0; 

#pragma vector aligned
    // Loop over particles that exert force: vectorization expected here
    for (int j = 0; j < nParticles; j++) { 
      
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
      Fx += dx * drPowerN3;  // scalar tuning
      Fy += dy * drPowerN3;  // scalar tuning
      Fz += dz * drPowerN3;  // scalar tuning
    }

    // Accelerate particles in response to the gravitational force
    // Note: 1st order Euler Approximation.
    // http://spiff.rit.edu/classes/phys317/lectures/euler.html
    particle.vx[i] += dt*Fx; 
    particle.vy[i] += dt*Fy; 
    particle.vz[i] += dt*Fz;
  }


#pragma omp parallel for
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
  const int version = 8; // implementation version - update as needed
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
  double rate = 0, dRate = 0; // Benchmarking data

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

      // our sum of assumed mean D (for short-cut method standard deviation)
      rate  += HztoGFLOPs/(tEnd - tStart);

      // sum of D^2 (for short-cut method standard deviation)
      dRate += HztoGFLOPs*HztoGFLOPs/((tEnd - tStart)*(tEnd-tStart)); 
    }

    printf("%5d %10.3e %10.3e %8.1f %s\n", 
	   step, (tEnd-tStart), HztoInts/(tEnd-tStart), HztoGFLOPs/(tEnd-tStart), (step<=skipSteps?"*":""));
    fflush(stdout);
  }

  // Compute the short-cut method standard deviaion.
  rate/=(double)(nSteps-skipSteps); 
  dRate=sqrt(dRate/(double)(nSteps-skipSteps)-rate*rate);

  printf("-----------------------------------------------------\n");
  printf("\033[1m%s %4s \033[42m%10.1f +- %.1f GFLOP/s\033[0m\n",
	 "Average performance:", "", rate, dRate);
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



# Set Arguments to parse into code here
NODES = 1

# Strong Scaling - Small nbody (Nodes = M)
# NODES: 1, 2, 4, 8, 16, 32
NSIZE = 16384

# Strong Scaling - Big nbody (Nodes = M)
# NODES: 1, 2, 4, 8, 16, 32
#NSIZE = 1048576

# Weak Scaling - Small nbody (Nodes = M)
#NSIZE = 16384 #NODES = 1 
#NSIZE = 32768 #NODES = 2
#NSIZE = 65536 #NODES = 4
#NSIZE = 131072 #NODES = 8
#NSIZE = 262144 #NODES = 16
#NSIZE = 524288 #NODES = 32

# Weak Scaling - Big nbody (Nodes = M)
#NSIZE = 262144 #NODES = 1
#NSIZE = 524288 #NODES = 2
#NSIZE = 1048576 #NODES = 4
#NSIZE = 2097152 #NODES = 8
#NSIZE = 4194304 #NODES = 16
#NSIZE = 8388608 #NODES = 32

# Sustain Duration (Nodes = M^2)
#NSIZE = 262144 #NODES = 1
#NSIZE = 524288 #NODES = 4
#NSIZE = 786384 #NODES = 9
#NSIZE = 1048576 #NODES = 16
#NSIZE = 1310400 #NODES = 25
#NSIZE = 1572480 #NODES = 36
#NSIZE = 1834560 #NODES = 49


# Set Compiler Stuff here
CXX = mpiicpc
CXXFLAGS=-qopenmp -mkl
KNLFLAGS = $(CXXFLAGS) -xMIC_AVX512 -DKNLTILE
OPTFLAGS = -qopt-report=5 -qopt-report-file=$@.optrpt -fp-model fast=2
LOGDIR = ./log
KNLOBJECTS = nbody.oKNL
TARGET=app-KNL

.SUFFIXES: .cc .oKNL

all: $(TARGET) instructions

%-KNL: $(KNLOBJECTS)
	$(info )
	$(info Linking the KNL executable:)
	$(CXX) $(CXXFLAGS) $(KNLFLAGS) -o $@ $(KNLOBJECTS)

.cc.oKNL:
	$(info )
	$(info Compiling a KNL object file:)
	$(CXX) $(CXXFLAGS) -c $(KNLFLAGS) $(OPTFLAGS) -o "$@" "$<"

instructions: 
	$(info )
	$(info TO EXECUTE THE APPLICATION: )
	$(info "make run-knl" to run the application on the host KNL)
	$(info )
	$(info TO QUEUE THE APPLICATION FOR TORQUE: )
	$(info "make queue-knl" to queue application for the host KNL)
	$(info )

run-knl: app-KNL
	./app-KNL $(NSIZE)

queue-knl: app-KNL
	mkdir -p $(LOGDIR)
	echo "mpirun -machinefile \$$PBS_NODEFILE -genv KMP_AFFINITY=compact,granularity=fine numactl -m 1 `pwd`/app-KNL $(NSIZE)" | qsub -l nodes=$(NODES):knl:xeonphi:flat -N nbody-knl -o $(LOGDIR) -e $(LOGDIR)

clean: 
	rm -f $(CPUOBJECTS) $(KNCOBJECTS) $(KNLOBJECTS) $(TARGET) *.optrpt

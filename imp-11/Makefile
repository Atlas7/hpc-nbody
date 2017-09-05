# Set Arguments to parse into code here
NODES=16

#NSIZE = 16384 #1N
#NSIZE = 32768 #2N
#NSIZE = 786384 #3N
#NSIZE = 65536 #4N
#NSIZE = 1310400 #5N
#NSIZE = 1572480
#NSIZE=1834560 #7N
#NSIZE = 131072 # 8N
#NSIZE = 262144 # 16N
#NSIZE = 524288 # 32N
NSIZE = 1048576 #64N 
#NSIZE = 2097152 #128N
#NSIZE= 4194304 #256N
#NSIZE = 8388608 #512N

#NSIZE=2028992 # about 7.74N

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

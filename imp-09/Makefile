# Set Arguments to parse into code here
#NSIZE=16384
#NSIZE=32768
#NSIZE=65536
#NSIZE=131072
#NSIZE=262144
NSIZE=524288

# Set Compiler Stuff here
CXX = icpc
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
	echo "numactl -m 0 `pwd`/app-KNL $(NSIZE)" | qsub -l nodes=1:knl:xeonphi:flat -N nbody-knl -o $(LOGDIR) -e $(LOGDIR)

clean: 
	rm -f $(CPUOBJECTS) $(KNCOBJECTS) $(KNLOBJECTS) $(TARGET) *.optrpt

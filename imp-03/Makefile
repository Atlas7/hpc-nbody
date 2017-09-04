# Environmental Variables for N-body Simulation
# We will explain how we come up with this simulation size later
NSIZE=16384

# Environmental Variables for Compiler
CXX = icpc
CXXFLAGS=-qopenmp -mkl
KNLFLAGS = $(CXXFLAGS) -xMIC_AVX512 -DKNLTILE
OPTFLAGS = -qopt-report=5 -qopt-report-file=$@.optrpt
LOGDIR = ./log
KNLOBJECTS = nbody.oKNL
TARGET=app-KNL

# list all possible file suffixes here for Makefile Suffix Rules 
.SUFFIXES: .cc .oKNL

# Standard Makefile Target to compile the entire program
all: $(TARGET) instructions

# Compile object file xxx.oKNL to binary file xxx-KNL
%-KNL: $(KNLOBJECTS)
	$(info )
	$(info Linking the KNL executable:)
	$(CXX) $(CXXFLAGS) $(KNLFLAGS) -o $@ $(KNLOBJECTS)

# Makefile Suffix Rules syntax: .<source>.<target>
# Compile source files xxx.cc to an object file xxx.oKNL
# "$<" <- source <- xxx.cc <- e.g. nbody.cc
# "$@" <- target <- xxx.okNL <- e.g. nbody.okNL
.cc.oKNL:
	$(info )
	$(info Compiling a KNL object file:)
	$(CXX) $(CXXFLAGS) -c $(KNLFLAGS) $(OPTFLAGS) -o "$@" "$<"

# Use $(info hello world) to print "hello world" to console
instructions:
	$(info )
	$(info TO EXECUTE THE APPLICATION: )
	$(info "make run-knl" to run the application on the host KNL)
	$(info )
	$(info TO QUEUE THE APPLICATION FOR TORQUE: )
	$(info "make queue-knl" to queue application for the host KNL)
	$(info )

# use "make run-knl" to run binary interactively on cluster node
run-knl: app-KNL
	./app-KNL $(NSIZE)

# use "make queue-knl" to submit binary to run on cluster node via qsub
# The output and error log files will be generated in $(LOGDIR)
queue-knl: app-KNL
	mkdir -p $(LOGDIR)
	echo "numactl -m 0 `pwd`/app-KNL $(NSIZE)" | qsub -l nodes=1:knl:xeonphi:flat -N nbody-knl -o $(LOGDIR) -e $(LOGDIR)

# use "make clean" to clear outputs created by the make command
clean:
	rm -f $(CPUOBJECTS) $(KNCOBJECTS) $(KNLOBJECTS) $(TARGET) *.optrp

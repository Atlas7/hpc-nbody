# hpc-nbody

Supplementary sample n-body simulation codes to run on the Colfax HPC Cluster (Intel Xeon Phi Cluster) to accompany the article [High Performance Computing (HPC) Running Intel Xeon Phi: N-body Simulation Example](http://mathalope.co.uk/2017/09/07/high-performance-computing-hpc-on-intel-xeon-phi-n-body-simulation-example/), inspired by the [Colfax How to Series - session 06 on N-body](https://colfaxresearch.com/how-series/#ses-06).

# Prerequisite

1. Have access to the Colfax HPC Cluster.
2. Have access to a Cluster node with an enabled Knights Landing (Xeon Phi) Host Processor.
3. (optional) have watched the [How-series Session 6 on optimization N-body algorithm](https://colfaxresearch.com/how-series/#ses-06)

# Instruction

1. git clone this repository.
2. Navigate to the appropriate implementation folder `imp-xx`.
3. `make queue-knl` to compile source and submit job to run on Cluster node.
4. Review performance log within the implementation subfolder at `log/nbody-knl.XXXXX`, where `XXXXX` is the job number.

# Reference

- [Colfax How to Series - session 06 on N-body](https://colfaxresearch.com/how-series/#ses-06)
- [Colfax Research HOW Series Labs GitHub- 4.01 N-Body](https://github.com/ColfaxResearch/HOW-Series-Labs/tree/master/4/4.01-overview-nbody)

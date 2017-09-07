# hpc-nbody

Supplementary sample codes for n-body simulation on the Colfax HPC Cluster - inspired by HowTo series Session 6

# Prerequisite

1. Have access to the Colfax HPC Cluster.
2. Have access to a Cluster node with an enabled Knights Landing (Xeon Phi) Host Processor.
3. (optional) have watched the [How-series Session 6 on optimization N-body algorithm](https://colfaxresearch.com/how-series/#ses-06)

# Instruction

1. git clone this repository.
2. Navigate to the appropriate implementation folder `imp-xx`.
3. `make queue-knl` to compile source and submit job to run on Cluster node.
4. Review performance log within the implementation subfolder at `log/nbody-knl.XXXXX`, where `XXXXX` is the job number.

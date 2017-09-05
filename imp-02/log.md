# Implementation 2 - Thread Tuning (Parallelize Level-2 (Inner) For Loop)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 02:28:05 PDT 2017
#    Job ID:           22822.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 2

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  5.993e-01  4.479e+08      9.0 *
    2  4.291e-01  6.255e+08     12.5 *
    3  4.306e-01  6.233e+08     12.5 *
    4  4.283e-01  6.267e+08     12.5 
    5  4.300e-01  6.242e+08     12.5 
    6  4.286e-01  6.263e+08     12.5 
    7  4.298e-01  6.245e+08     12.5 
    8  4.274e-01  6.280e+08     12.6 
    9  4.288e-01  6.260e+08     12.5 
   10  4.276e-01  6.277e+08     12.6 
-----------------------------------------------------
Average performance:            12.5 +- 0.0 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22822.c001
# Date: Tue Sep  5 02:28:11 PDT 2017
########################################################################

```

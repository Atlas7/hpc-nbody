# Implementation 6 - Scalar Tuning (Replace Power of Half with Square Root)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:55:47 PDT 2017
#    Job ID:           23038.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 6

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  8.949e-02  3.000e+09     60.0 *
    2  8.612e-03  3.117e+10    623.3 *
    3  8.604e-03  3.120e+10    623.9 *
    4  8.596e-03  3.123e+10    624.5 
    5  8.607e-03  3.119e+10    623.7 
    6  8.592e-03  3.124e+10    624.8 
    7  8.650e-03  3.103e+10    620.6 
    8  8.626e-03  3.112e+10    622.4 
    9  8.591e-03  3.124e+10    624.9 
   10  8.627e-03  3.111e+10    622.3 
-----------------------------------------------------
Average performance:           623.3 +- 1.5 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23038.c001
# Date: Tue Sep  5 16:55:49 PDT 2017
########################################################################
```

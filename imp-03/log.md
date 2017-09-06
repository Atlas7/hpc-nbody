# Implementation 3 - Thread Tuning (Parallelize Level-1 (Outer) For Loop)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 17:03:46 PDT 2017
#    Job ID:           23042.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 3

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.093e-01  2.456e+09     49.1 *
    2  1.486e-02  1.806e+10    361.3 *
    3  1.484e-02  1.808e+10    361.7 *
    4  1.486e-02  1.806e+10    361.3 
    5  1.479e-02  1.814e+10    362.9 
    6  1.487e-02  1.805e+10    361.0 
    7  1.610e-02  1.668e+10    333.5 
    8  1.487e-02  1.805e+10    361.0 
    9  1.484e-02  1.809e+10    361.8 
   10  1.485e-02  1.807e+10    361.4 
-----------------------------------------------------
Average performance:           357.6 +- 9.8 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23042.c001
# Date: Tue Sep  5 17:03:48 PDT 2017
########################################################################
```

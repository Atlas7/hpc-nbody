# Implementation 3 - Thread Tuning (Parallelize Level-1 (Outer) For Loop)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 02:43:49 PDT 2017
#    Job ID:           22824.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 3

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  9.790e-02  2.742e+09     54.8 *
    2  1.596e-02  1.682e+10    336.3 *
    3  1.593e-02  1.685e+10    337.0 *
    4  1.705e-02  1.575e+10    314.9 
    5  1.596e-02  1.681e+10    336.3 
    6  1.593e-02  1.685e+10    336.9 
    7  1.595e-02  1.683e+10    336.7 
    8  1.592e-02  1.686e+10    337.1 
    9  1.593e-02  1.685e+10    337.1 
   10  1.593e-02  1.685e+10    337.0 
-----------------------------------------------------
Average performance:           333.7 +- 7.7 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22824.c001
# Date: Tue Sep  5 02:43:51 PDT 2017
########################################################################

```

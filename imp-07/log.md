# Implementation 7 - Scalar Tuning (Enables Aggressive Optimizations on Floating-point Data with Compiler Option)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:58:44 PDT 2017
#    Job ID:           23039.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 7

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.182e-01  2.271e+09     45.4 *
    2  8.227e-03  3.263e+10    652.5 *
    3  8.190e-03  3.277e+10    655.5 *
    4  8.205e-03  3.271e+10    654.3 
    5  8.176e-03  3.283e+10    656.6 
    6  8.188e-03  3.278e+10    655.6 
    7  8.172e-03  3.285e+10    656.9 
    8  8.195e-03  3.275e+10    655.1 
    9  8.295e-03  3.236e+10    647.2 
   10  8.191e-03  3.277e+10    655.4 
-----------------------------------------------------
Average performance:           654.4 +- 3.1 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23039.c001
# Date: Tue Sep  5 16:58:46 PDT 2017
########################################################################
```

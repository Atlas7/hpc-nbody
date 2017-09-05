# Implementation 5 - Scalar Tuning (Replace Divide with Multiply)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 02:49:33 PDT 2017
#    Job ID:           22827.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 5

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  8.881e-02  3.022e+09     60.4 *
    2  9.265e-03  2.897e+10    579.4 *
    3  9.243e-03  2.904e+10    580.8 *
    4  9.262e-03  2.898e+10    579.6 
    5  9.246e-03  2.903e+10    580.6 
    6  9.274e-03  2.894e+10    578.9 
    7  9.276e-03  2.894e+10    578.7 
    8  9.228e-03  2.909e+10    581.7 
    9  9.244e-03  2.904e+10    580.7 
   10  9.223e-03  2.910e+10    582.1 
-----------------------------------------------------
Average performance:           580.3 +- 1.2 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22827.c001
# Date: Tue Sep  5 02:49:35 PDT 2017
########################################################################

```

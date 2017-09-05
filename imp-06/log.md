# Implementation 6 - Scalar Tuning (Replace Power of Half with Square Root)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 02:05:46 PDT 2017
#    Job ID:           22810.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 6

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.067e-01  2.516e+09     50.3 *
    2  9.261e-03  2.898e+10    579.7 *
    3  9.264e-03  2.897e+10    579.5 *
    4  9.247e-03  2.903e+10    580.5 
    5  9.260e-03  2.899e+10    579.7 
    6  9.252e-03  2.901e+10    580.2 
    7  9.248e-03  2.902e+10    580.5 
    8  9.272e-03  2.895e+10    579.0 
    9  9.241e-03  2.905e+10    580.9 
   10  9.251e-03  2.902e+10    580.3 
-----------------------------------------------------
Average performance:           580.2 +- 0.6 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22810.c001
# Date: Tue Sep  5 02:05:48 PDT 2017
########################################################################

```

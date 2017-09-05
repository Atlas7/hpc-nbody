# Implementation 4 - Scalar Tuning (Avoid Precision Conversion Overhead)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 02:47:21 PDT 2017
#    Job ID:           22825.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 4

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.509e-01  1.779e+09     35.6 *
    2  2.148e-02  1.249e+10    249.9 *
    3  1.225e-02  2.191e+10    438.2 *
    4  1.209e-02  2.221e+10    444.1 
    5  1.212e-02  2.215e+10    442.9 
    6  1.206e-02  2.226e+10    445.2 
    7  1.206e-02  2.225e+10    445.0 
    8  1.207e-02  2.223e+10    444.6 
    9  1.207e-02  2.223e+10    444.6 
   10  1.207e-02  2.224e+10    444.8 
-----------------------------------------------------
Average performance:           444.5 +- 0.7 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22825.c001
# Date: Tue Sep  5 02:47:23 PDT 2017
########################################################################

```

# Implementation 4 - Scalar Tuning (Avoid Precision Conversion Overhead)

### Job Run Log

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 17:02:39 PDT 2017
#    Job ID:           23041.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 4

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  9.083e-02  2.955e+09     59.1 *
    2  1.128e-02  2.380e+10    475.9 *
    3  1.123e-02  2.389e+10    477.9 *
    4  1.125e-02  2.386e+10    477.1 
    5  1.130e-02  2.375e+10    475.0 
    6  1.123e-02  2.390e+10    478.0 
    7  1.122e-02  2.393e+10    478.6 
    8  1.124e-02  2.387e+10    477.4 
    9  1.125e-02  2.387e+10    477.4 
   10  1.124e-02  2.388e+10    477.5 
-----------------------------------------------------
Average performance:           477.3 +- 1.1 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23041.c001
# Date: Tue Sep  5 17:02:41 PDT 2017
########################################################################
```

# Implementation 8 - Vectorization Tuning (Restructure Data from AoS to SoA)

From Array of Structures (AoS) fo Structure of Arrays (SoA)

### Job Run Log

```
########################################################################
# Colfax Cluster
# End of output for job 22815.c001
# Date: Tue Sep  5 02:18:20 PDT 2017
########################################################################

[u4443@c001 imp-08]$ cat ./log/nbody-knl.o22816 

########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 02:18:33 PDT 2017
#    Job ID:           22816.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 8

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  8.662e-02  3.099e+09     62.0 *
    2  2.840e-03  9.451e+10   1890.2 *
    3  2.855e-03  9.402e+10   1880.3 *
    4  2.855e-03  9.402e+10   1880.3 
    5  2.848e-03  9.424e+10   1884.9 
    6  2.844e-03  9.438e+10   1887.6 
    7  2.848e-03  9.425e+10   1885.0 
    8  2.818e-03  9.525e+10   1905.0 
    9  2.812e-03  9.546e+10   1909.2 
   10  2.862e-03  9.379e+10   1875.8 
-----------------------------------------------------
Average performance:          1889.7 +- 11.6 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22816.c001
# Date: Tue Sep  5 02:18:35 PDT 2017
########################################################################
```

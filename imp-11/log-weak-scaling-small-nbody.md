# Implementation 11 - Cluster Communication Tuning (For Scalability)

### Log - Weak Scaling Study - Small n-body case

Given a fixed total problem size per node (16,384 particles per node. i.e. 268,419,072 interactions per node), how does the duration and overall performance vary with the number of node?

M = 4 case (N0 = 16384, NSIZE = 65536):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Fri Sep  1 10:55:02 PDT 2017
#    Job ID:           22700.c001
#      User:           u4443
# Resources:           neednodes=4:knl:xeonphi:flat,nodes=4:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 65536 particles using 256 threads, distributed across 4 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.291e-01  3.326e+10    665.2 *
    2  1.794e-02  2.394e+11   4787.6 *
    3  1.830e-02  2.347e+11   4694.1 *
    4  1.855e-02  2.316e+11   4631.6 
    5  1.842e-02  2.332e+11   4663.8 
    6  1.896e-02  2.265e+11   4530.7 
    7  1.906e-02  2.253e+11   4505.7 
    8  1.883e-02  2.281e+11   4563.0 
    9  1.893e-02  2.268e+11   4536.7 
   10  1.879e-02  2.286e+11   4571.5 
-----------------------------------------------------
Average performance:          4571.9 +- 52.6 GFLOP/s
Average duration:       1.879e-02 +-  2.150e-04 s
Average duration:      18.791 +- 0.215 ms
-----------------------------------------------------
* - warm-up, not included in average


  ########################################################################
  # Colfax Cluster
  # End of output for job 22700.c001
  # Date: Fri Sep  1 10:55:11 PDT 2017
  ########################################################################

```

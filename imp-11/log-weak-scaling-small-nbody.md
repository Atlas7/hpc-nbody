# Implementation 11 - Cluster Communication Tuning (For Scalability)

### Log - Weak Scaling Study - Small n-body case

Given a fixed total problem size per node (16,384 particles per node. i.e. 268,419,072 interactions per node), how does the duration and overall performance vary with the number of node?


M = 1 case (N0 = 16384, NSIZE = 16384):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Fri Sep  1 10:49:08 PDT 2017
#    Job ID:           22695.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 16384 particles using 256 threads, distributed across 1 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  8.947e-02  3.000e+09     60.0 *
    2  2.015e-03  1.332e+11   2664.1 *
    3  2.001e-03  1.341e+11   2682.8 *
    4  1.992e-03  1.347e+11   2695.0 
    5  1.989e-03  1.350e+11   2699.2 
    6  1.998e-03  1.343e+11   2686.9 
    7  1.991e-03  1.348e+11   2696.3 
    8  1.985e-03  1.352e+11   2704.7 
    9  1.979e-03  1.356e+11   2712.5 
   10  1.977e-03  1.358e+11   2715.5 
-----------------------------------------------------
Average performance:          2701.4 +- 9.3 GFLOP/s
Average duration:       1.987e-03 +-  6.883e-06 s
Average duration:      1.987 +- 0.007 ms
-----------------------------------------------------
* - warm-up, not included in average


  ########################################################################
  # Colfax Cluster
  # End of output for job 22695.c001
  # Date: Fri Sep  1 10:49:11 PDT 2017
  ########################################################################
```

M = 2 case (N0 = 16384, NSIZE = 32768):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Fri Sep  1 10:51:09 PDT 2017
#    Job ID:           22697.c001
#      User:           u4443
# Resources:           neednodes=2:knl:xeonphi:flat,nodes=2:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 32768 particles using 256 threads, distributed across 2 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.251e-01  8.585e+09    171.7 *
    2  7.456e-03  1.440e+11   2880.1 *
    3  7.434e-03  1.444e+11   2888.6 *
    4  7.393e-03  1.452e+11   2904.7 
    5  7.499e-03  1.432e+11   2863.6 
    6  7.393e-03  1.452e+11   2904.6 
    7  7.189e-03  1.494e+11   2987.2 
    8  7.347e-03  1.461e+11   2922.8 
    9  7.454e-03  1.440e+11   2880.9 
   10  7.357e-03  1.459e+11   2918.9 
-----------------------------------------------------
Average performance:          2911.8 +- 36.3 GFLOP/s
Average duration:       7.376e-03 +-  9.104e-05 s
Average duration:      7.376 +- 0.091 ms
-----------------------------------------------------
* - warm-up, not included in average


  ########################################################################
  # Colfax Cluster
  # End of output for job 22697.c001
  # Date: Fri Sep  1 10:51:15 PDT 2017
  ########################################################################
```

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


M = 8 case (N0 = 16384, NSIZE = 131072):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Fri Sep  1 10:56:56 PDT 2017
#    Job ID:           22701.c001
#      User:           u4443
# Resources:           neednodes=8:knl:xeonphi:flat,nodes=8:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 131072 particles using 256 threads, distributed across 8 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.754e-01  9.796e+10   1959.2 *
    2  3.614e-02  4.753e+11   9506.8 *
    3  3.584e-02  4.793e+11   9586.6 *
    4  4.424e-02  3.883e+11   7766.8 
    5  4.551e-02  3.775e+11   7549.9 
    6  4.442e-02  3.868e+11   7735.3 
    7  4.424e-02  3.883e+11   7766.1 
    8  3.429e-02  5.011e+11  10021.7 
    9  3.448e-02  4.982e+11   9963.6 
   10  4.422e-02  3.885e+11   7769.4 
-----------------------------------------------------
Average performance:          8367.5 +- 1030.4 GFLOP/s
Average duration:       4.163e-02 +-  4.601e-03 s
Average duration:      41.629 +- 4.601 ms
-----------------------------------------------------
* - warm-up, not included in average


  ########################################################################
  # Colfax Cluster
  # End of output for job 22701.c001
  # Date: Fri Sep  1 10:57:11 PDT 2017
  ########################################################################
```

M = 16 case (N0 = 16384, NSIZE = 262144):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Fri Sep  1 10:58:55 PDT 2017
#    Job ID:           22703.c001
#      User:           u4443
# Resources:           neednodes=16:knl:xeonphi:flat,nodes=16:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 262144 particles using 256 threads, distributed across 16 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.646e-01  4.176e+11   8352.0 *
    2  6.846e-02  1.004e+12  20076.1 *
    3  6.862e-02  1.001e+12  20029.8 *
    4  7.299e-02  9.415e+11  18829.0 
    5  6.975e-02  9.852e+11  19703.3 
    6  6.721e-02  1.022e+12  20447.9 
    7  6.990e-02  9.831e+11  19662.7 
    8  6.976e-02  9.851e+11  19702.2 
    9  6.788e-02  1.012e+12  20246.6 
   10  7.168e-02  9.588e+11  19175.2 
-----------------------------------------------------
Average performance:         19681.0 +- 519.8 GFLOP/s
Average duration:       6.988e-02 +-  1.853e-03 s
Average duration:      69.882 +- 1.853 ms
-----------------------------------------------------
* - warm-up, not included in average


  ########################################################################
  # Colfax Cluster
  # End of output for job 22703.c001
  # Date: Fri Sep  1 10:59:22 PDT 2017
  ########################################################################
```

M = 32 case (N0 = 16384, NSIZE = 524288):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Fri Sep  1 11:00:53 PDT 2017
#    Job ID:           22706.c001
#      User:           u4443
# Resources:           neednodes=32:knl:xeonphi:flat,nodes=32:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 524288 particles using 256 threads, distributed across 32 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.607e-01  1.054e+12  21086.6 *
    2  1.405e-01  1.956e+12  39119.0 *
    3  1.374e-01  2.000e+12  40004.0 *
    4  1.394e-01  1.972e+12  39430.7 
    5  1.397e-01  1.967e+12  39343.5 
    6  1.573e-01  1.748e+12  34952.6 
    7  1.593e-01  1.725e+12  34508.1 
    8  1.559e-01  1.764e+12  35270.5 
    9  1.468e-01  1.873e+12  37453.3 
   10  1.637e-01  1.679e+12  33579.4 
-----------------------------------------------------
Average performance:         36362.6 +- 2199.2 GFLOP/s
Average duration:       1.517e-01 +-  9.016e-03 s
Average duration:      151.732 +- 9.016 ms
-----------------------------------------------------
* - warm-up, not included in average


  ########################################################################
  # Colfax Cluster
  # End of output for job 22706.c001
  # Date: Fri Sep  1 11:01:49 PDT 2017
  ########################################################################
```

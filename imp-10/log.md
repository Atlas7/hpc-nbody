# Implementation 10 - Memory Tuning (Loop Tiling with Register Blocking to take advantage of L1 and L2 Cache)

### Bonus: Implementation 10 Log

Here are the actual job run logs of Implementation 10 (with loop tiling)

M = 1 case (N0 = 16384, NSIZE = 16384):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Aug 29 06:00:47 PDT 2017
#    Job ID:           22495.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.288e-01  2.084e+09     41.7 *
    2  1.638e-03  1.639e+11   3277.5 *
    3  1.639e-03  1.638e+11   3275.6 *
    4  1.606e-03  1.671e+11   3342.7
    5  1.624e-03  1.653e+11   3305.9
    6  1.644e-03  1.633e+11   3265.2
    7  1.620e-03  1.657e+11   3314.2
    8  1.625e-03  1.652e+11   3303.5
    9  1.678e-03  1.600e+11   3199.3
   10  1.643e-03  1.634e+11   3267.5
-----------------------------------------------------
Average performance:          3285.5 +- 43.1 GFLOP/s
Average duration:       1.634e-03 +-  2.167e-05 s
Average duration:      1.634 +- 0.022 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22495.c001
# Date: Tue Aug 29 06:00:49 PDT 2017
########################################################################
```

M = 2 case (N0 = 16384, NSIZE = 32768):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Aug 29 06:10:17 PDT 2017
#    Job ID:           22496.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 32768 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.146e-01  9.366e+09    187.3 *
    2  6.347e-03  1.692e+11   3383.3 *
    3  6.325e-03  1.698e+11   3395.1 *
    4  6.332e-03  1.696e+11   3391.3
    5  6.352e-03  1.690e+11   3380.6
    6  6.318e-03  1.699e+11   3398.8
    7  6.316e-03  1.700e+11   3400.0
    8  6.341e-03  1.693e+11   3386.6
    9  6.347e-03  1.692e+11   3383.4
   10  6.332e-03  1.696e+11   3391.4
-----------------------------------------------------
Average performance:          3390.3 +- 6.8 GFLOP/s
Average duration:       6.334e-03 +-  1.273e-05 s
Average duration:      6.334 +- 0.013 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22496.c001
# Date: Tue Aug 29 06:10:19 PDT 2017
########################################################################
```

M = 4 case (N0 = 16384, NSIZE = 65536):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Aug 29 06:23:39 PDT 2017
#    Job ID:           22497.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 65536 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.706e-01  2.517e+10    503.4 *
    2  2.516e-02  1.707e+11   3413.9 *
    3  2.512e-02  1.710e+11   3419.4 *
    4  2.517e-02  1.706e+11   3412.6
    5  2.514e-02  1.709e+11   3417.5
    6  2.514e-02  1.708e+11   3416.2
    7  2.642e-02  1.626e+11   3251.7
    8  2.525e-02  1.701e+11   3401.5
    9  2.515e-02  1.707e+11   3414.9
   10  2.517e-02  1.706e+11   3413.0
-----------------------------------------------------
Average performance:          3389.6 +- 56.5 GFLOP/s
Average duration:       2.535e-02 +-  4.372e-04 s
Average duration:      25.349 +- 0.437 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22497.c001
# Date: Tue Aug 29 06:23:41 PDT 2017
########################################################################
```

M = 8 case (N0 = 16384, NSIZE = 131072):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Aug 29 16:09:15 PDT 2017
#    Job ID:           22530.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 131072 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.965e-01  8.742e+10   1748.4 *
    2  1.008e-01  1.704e+11   3407.4 *
    3  1.008e-01  1.705e+11   3409.5 *
    4  1.010e-01  1.702e+11   3403.6
    5  1.009e-01  1.703e+11   3406.5
    6  1.008e-01  1.705e+11   3409.6
    7  1.008e-01  1.704e+11   3407.8
    8  1.021e-01  1.682e+11   3364.5
    9  1.009e-01  1.702e+11   3404.8
   10  1.010e-01  1.700e+11   3400.3
-----------------------------------------------------
Average performance:          3399.6 +- 14.6 GFLOP/s
Average duration:       1.011e-01 +-  4.374e-04 s
Average duration:      101.072 +- 0.437 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22530.c001
# Date: Tue Aug 29 16:09:18 PDT 2017
########################################################################
```

M = 16 case (N0 = 16384, NSIZE = 262144):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Aug 29 16:12:31 PDT 2017
#    Job ID:           22531.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 262144 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  5.058e-01  1.359e+11   2717.1 *
    2  4.056e-01  1.694e+11   3388.6 *
    3  4.059e-01  1.693e+11   3386.2 *
    4  4.058e-01  1.694e+11   3387.3
    5  4.065e-01  1.691e+11   3381.4
    6  4.063e-01  1.691e+11   3382.6
    7  4.059e-01  1.693e+11   3386.1
    8  4.061e-01  1.692e+11   3384.6
    9  4.071e-01  1.688e+11   3375.9
   10  4.045e-01  1.699e+11   3397.4
-----------------------------------------------------
Average performance:          3385.0 +- 6.1 GFLOP/s
Average duration:       4.060e-01 +-  7.309e-04 s
Average duration:      406.019 +- 0.731 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22531.c001
# Date: Tue Aug 29 16:12:37 PDT 2017
########################################################################
```

M = 32 case (N0 = 16384, NSIZE = 524288):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Aug 29 16:19:05 PDT 2017
#    Job ID:           22532.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 524288 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.730e+00  1.589e+11   3178.2 *
    2  1.666e+00  1.650e+11   3300.6 *
    3  1.648e+00  1.668e+11   3335.0 *
    4  1.649e+00  1.667e+11   3334.4
    5  1.650e+00  1.666e+11   3331.4
    6  1.649e+00  1.667e+11   3334.5
    7  1.649e+00  1.667e+11   3333.1
    8  1.661e+00  1.655e+11   3310.3
    9  1.651e+00  1.665e+11   3330.0
   10  1.649e+00  1.667e+11   3333.1
-----------------------------------------------------
Average performance:          3329.5 +- 8.0 GFLOP/s
Average duration:       1.651e+00 +-  3.984e-03 s
Average duration:      1651.155 +- 3.984 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22532.c001
# Date: Tue Aug 29 16:19:24 PDT 2017
########################################################################
```

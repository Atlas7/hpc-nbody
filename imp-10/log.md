# Implementation 10 - Memory Tuning (Loop Tiling with Register Blocking to take advantage of L1 and L2 Cache)

### Bonus: Implementation 10 Log

Here are the actual job run logs of Implementation 10 (with loop tiling)

M = 1 case (N0 = 16384, NSIZE = 16384):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 00:32:20 PDT 2017
#    Job ID:           22802.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.279e-01  2.098e+09     42.0 *
    2  1.894e-03  1.417e+11   2834.4 *
    3  1.899e-03  1.413e+11   2826.9 *
    4  1.886e-03  1.423e+11   2846.2 
    5  1.894e-03  1.417e+11   2834.4 
    6  1.897e-03  1.415e+11   2829.8 
    7  1.895e-03  1.416e+11   2833.0 
    8  1.907e-03  1.408e+11   2815.3 
    9  1.894e-03  1.417e+11   2834.4 
   10  1.899e-03  1.413e+11   2826.9 
-----------------------------------------------------
Average performance:          2831.4 +- 8.6 GFLOP/s
Average duration:       1.896e-03 +-  5.794e-06 s
Average duration:      1.896 +- 0.006 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22802.c001
# Date: Tue Sep  5 00:32:22 PDT 2017
########################################################################

```

M = 2 case (N0 = 16384, NSIZE = 32768):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 00:34:42 PDT 2017
#    Job ID:           22803.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 32768 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  9.651e-02  1.113e+10    222.5 *
    2  7.408e-03  1.449e+11   2898.8 *
    3  7.398e-03  1.451e+11   2902.7 *
    4  7.407e-03  1.450e+11   2899.1 
    5  7.372e-03  1.456e+11   2912.9 
    6  7.392e-03  1.453e+11   2905.1 
    7  7.372e-03  1.456e+11   2913.0 
    8  7.392e-03  1.453e+11   2905.1 
    9  7.366e-03  1.458e+11   2915.3 
   10  7.404e-03  1.450e+11   2900.4 
-----------------------------------------------------
Average performance:          2907.3 +- 6.0 GFLOP/s
Average duration:       7.386e-03 +-  1.526e-05 s
Average duration:      7.386 +- 0.015 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22803.c001
# Date: Tue Sep  5 00:34:44 PDT 2017
########################################################################

```

M = 4 case (N0 = 16384, NSIZE = 65536):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 00:37:26 PDT 2017
#    Job ID:           22804.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 65536 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.614e-01  2.661e+10    532.2 *
    2  2.945e-02  1.458e+11   2916.8 *
    3  3.082e-02  1.393e+11   2786.8 *
    4  2.943e-02  1.459e+11   2918.2 
    5  2.945e-02  1.458e+11   2916.3 
    6  2.943e-02  1.459e+11   2918.9 
    7  2.943e-02  1.459e+11   2918.8 
    8  2.945e-02  1.459e+11   2917.1 
    9  2.982e-02  1.440e+11   2880.7 
   10  2.948e-02  1.457e+11   2913.3 
-----------------------------------------------------
Average performance:          2911.9 +- 12.9 GFLOP/s
Average duration:       2.950e-02 +-  1.314e-04 s
Average duration:      29.499 +- 0.131 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22804.c001
# Date: Tue Sep  5 00:37:28 PDT 2017
########################################################################
```

M = 8 case (N0 = 16384, NSIZE = 131072):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 00:38:09 PDT 2017
#    Job ID:           22805.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 131072 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.068e-01  8.307e+10   1661.5 *
    2  1.179e-01  1.457e+11   2913.2 *
    3  1.180e-01  1.455e+11   2910.7 *
    4  1.180e-01  1.456e+11   2912.6 
    5  1.192e-01  1.442e+11   2883.1 
    6  1.179e-01  1.457e+11   2914.4 
    7  1.181e-01  1.455e+11   2909.8 
    8  1.180e-01  1.456e+11   2912.5 
    9  1.180e-01  1.455e+11   2911.0 
   10  1.180e-01  1.456e+11   2911.7 
-----------------------------------------------------
Average performance:          2907.9 +- 10.2 GFLOP/s
Average duration:       1.182e-01 +-  4.178e-04 s
Average duration:      118.162 +- 0.418 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22805.c001
# Date: Tue Sep  5 00:38:12 PDT 2017
########################################################################
```

M = 16 case (N0 = 16384, NSIZE = 262144):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 00:39:11 PDT 2017
#    Job ID:           22806.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 262144 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  5.842e-01  1.176e+11   2352.5 *
    2  4.747e-01  1.448e+11   2895.5 *
    3  4.742e-01  1.449e+11   2898.2 *
    4  4.751e-01  1.446e+11   2892.9 
    5  4.749e-01  1.447e+11   2894.0 
    6  4.757e-01  1.445e+11   2889.1 
    7  4.757e-01  1.445e+11   2889.1 
    8  4.751e-01  1.446e+11   2892.6 
    9  4.745e-01  1.448e+11   2896.5 
   10  4.750e-01  1.447e+11   2893.5 
-----------------------------------------------------
Average performance:          2892.5 +- 2.5 GFLOP/s
Average duration:       4.751e-01 +-  4.053e-04 s
Average duration:      475.148 +- 0.405 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22806.c001
# Date: Tue Sep  5 00:39:18 PDT 2017
########################################################################
```

M = 32 case (N0 = 16384, NSIZE = 524288):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 00:40:05 PDT 2017
#    Job ID:           22807.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 10

Propagating 524288 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.025e+00  1.358e+11   2715.5 *
    2  1.933e+00  1.422e+11   2844.2 *
    3  1.934e+00  1.421e+11   2842.9 *
    4  1.942e+00  1.416e+11   2831.3 
    5  1.934e+00  1.421e+11   2842.5 
    6  2.173e+00  1.265e+11   2530.5 
    7  1.933e+00  1.422e+11   2843.9 
    8  1.933e+00  1.422e+11   2843.4 
    9  1.952e+00  1.408e+11   2816.8 
   10  1.932e+00  1.423e+11   2845.8 
-----------------------------------------------------
Average performance:          2793.5 +- 107.8 GFLOP/s
Average duration:       1.971e+00 +-  8.246e-02 s
Average duration:      1971.192 +- 82.462 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22807.c001
# Date: Tue Sep  5 00:40:27 PDT 2017
########################################################################
```

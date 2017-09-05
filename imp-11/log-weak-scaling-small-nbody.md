# Implementation 11 - Cluster Communication Tuning (For Scalability)

### Log - Weak Scaling Study - Small n-body case

Given a fixed total problem size per node (16,384 particles per node. i.e. 268,419,072 interactions per node), how does the duration and overall performance vary with the number of node?


M = 1 case (N0 = 16384, NSIZE = 16384):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 15:30:59 PDT 2017
#    Job ID:           22992.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 16384 particles using 256 threads, distributed across 1 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  8.755e-02  3.066e+09     61.3 *
    2  1.800e-03  1.491e+11   2982.7 *
    3  1.763e-03  1.523e+11   3045.3 *
    4  1.735e-03  1.547e+11   3094.2 
    5  1.784e-03  1.505e+11   3009.0 
    6  1.779e-03  1.509e+11   3017.5 
    7  1.810e-03  1.483e+11   2965.8 
    8  1.959e-03  1.370e+11   2740.2 
    9  1.783e-03  1.506e+11   3011.0 
   10  1.808e-03  1.485e+11   2969.4 
-----------------------------------------------------
Average performance:          2972.5 +- 102.6 GFLOP/s
Average duration:       1.808e-03 +-  6.569e-05 s
Average duration:      1.808 +- 0.066 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22992.c001
# Date: Tue Sep  5 15:31:01 PDT 2017
########################################################################
```

M = 2 case (N0 = 16384, NSIZE = 32768):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 15:32:12 PDT 2017
#    Job ID:           22993.c001
#      User:           u4443
# Resources:           neednodes=2:knl:xeonphi:flat,nodes=2:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 32768 particles using 256 threads, distributed across 2 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.402e-01  7.659e+09    153.2 *
    2  7.092e-03  1.514e+11   3027.9 *
    3  6.870e-03  1.563e+11   3125.8 *
    4  7.372e-03  1.456e+11   2913.0 
    5  7.067e-03  1.519e+11   3038.6 
    6  7.328e-03  1.465e+11   2930.5 
    7  6.800e-03  1.579e+11   3158.0 
    8  6.705e-03  1.601e+11   3202.7 
    9  6.802e-03  1.579e+11   3157.0 
   10  6.513e-03  1.649e+11   3297.2 
-----------------------------------------------------
Average performance:          3099.6 +- 132.8 GFLOP/s
Average duration:       6.941e-03 +-  2.999e-04 s
Average duration:      6.941 +- 0.300 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22993.c001
# Date: Tue Sep  5 15:32:18 PDT 2017
########################################################################
```

M = 4 case (N0 = 16384, NSIZE = 65536):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 15:33:03 PDT 2017
#    Job ID:           22994.c001
#      User:           u4443
# Resources:           neednodes=4:knl:xeonphi:flat,nodes=4:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 65536 particles using 256 threads, distributed across 4 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.222e-01  1.933e+10    386.6 *
    2  1.749e-02  2.456e+11   4911.6 *
    3  1.764e-02  2.435e+11   4869.5 *
    4  1.727e-02  2.487e+11   4973.3 
    5  1.875e-02  2.291e+11   4581.5 
    6  1.652e-02  2.601e+11   5201.2 
    7  1.913e-02  2.245e+11   4490.7 
    8  1.693e-02  2.536e+11   5072.5 
    9  1.884e-02  2.280e+11   4559.1 
   10  1.699e-02  2.528e+11   5056.7 
-----------------------------------------------------
Average performance:          4847.9 +- 271.6 GFLOP/s
Average duration:       1.778e-02 +-  1.006e-03 s
Average duration:      17.775 +- 1.006 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22994.c001
# Date: Tue Sep  5 15:33:11 PDT 2017
########################################################################
```


M = 8 case (N0 = 16384, NSIZE = 131072):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 15:35:24 PDT 2017
#    Job ID:           22995.c001
#      User:           u4443
# Resources:           neednodes=8:knl:xeonphi:flat,nodes=8:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 131072 particles using 256 threads, distributed across 8 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.301e-01  1.321e+11   2641.3 *
    2  3.262e-02  5.266e+11  10532.3 *
    3  4.481e-02  3.834e+11   7667.3 *
    4  3.204e-02  5.362e+11  10723.6 
    5  3.240e-02  5.302e+11  10603.8 
    6  3.258e-02  5.273e+11  10545.9 
    7  3.076e-02  5.585e+11  11170.9 
    8  3.250e-02  5.287e+11  10573.5 
    9  3.178e-02  5.405e+11  10810.9 
   10  3.101e-02  5.540e+11  11080.2 
-----------------------------------------------------
Average performance:         10787.0 +- 231.5 GFLOP/s
Average duration:       3.187e-02 +-  6.756e-04 s
Average duration:      31.867 +- 0.676 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22995.c001
# Date: Tue Sep  5 15:35:37 PDT 2017
########################################################################
```

M = 16 case (N0 = 16384, NSIZE = 262144):

```

```

M = 32 case (N0 = 16384, NSIZE = 524288):

```

```

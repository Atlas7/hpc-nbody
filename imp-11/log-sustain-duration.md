# Strong and Weak Scaling Studies - on Implementation 11

### Log - Sustain Duration with Extra Nodes (Robust up to 4 nodes)

M = 1 case (N0 = 262,144, NSIZE = 262,144, Nodes = 1):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:01:10 PDT 2017
#    Job ID:           23012.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 262144 particles using 256 threads, distributed across 1 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  5.307e-01  1.295e+11   2589.6 *
    2  4.420e-01  1.555e+11   3109.5 *
    3  4.403e-01  1.561e+11   3121.2 *
    4  4.416e-01  1.556e+11   3112.0 
    5  4.413e-01  1.557e+11   3114.7 
    6  4.416e-01  1.556e+11   3112.4 
    7  4.416e-01  1.556e+11   3112.0 
    8  6.133e-01  1.121e+11   2241.1 
    9  5.337e-01  1.288e+11   2575.1 
   10  4.672e-01  1.471e+11   2941.7 
-----------------------------------------------------
Average performance:          2887.0 +- 321.0 GFLOP/s
Average duration:       4.829e-01 +-  6.172e-02 s
Average duration:      482.901 +- 61.725 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23012.c001
# Date: Tue Sep  5 16:01:17 PDT 2017
########################################################################
```

M = 2 case (N0 = 262,144, NSIZE = 524,288, Nodes = 4):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:01:37 PDT 2017
#    Job ID:           23013.c001
#      User:           u4443
# Resources:           neednodes=4:knl:xeonphi:flat,nodes=4:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 524288 particles using 256 threads, distributed across 4 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  7.979e-01  3.445e+11   6890.4 *
    2  5.474e-01  5.021e+11  10042.2 *
    3  5.216e-01  5.269e+11  10538.8 *
    4  5.343e-01  5.145e+11  10289.4 
    5  5.214e-01  5.272e+11  10544.3 
    6  5.473e-01  5.022e+11  10043.9 
    7  5.350e-01  5.138e+11  10276.6 
    8  5.417e-01  5.074e+11  10148.0 
    9  5.336e-01  5.151e+11  10301.8 
   10  5.202e-01  5.284e+11  10567.4 
-----------------------------------------------------
Average performance:         10310.2 +- 177.2 GFLOP/s
Average duration:       5.334e-01 +-  9.144e-03 s
Average duration:      533.371 +- 9.144 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23013.c001
# Date: Tue Sep  5 16:01:50 PDT 2017
########################################################################
```

M = ~3 case (N0 = 262,144, NSIZE = 786,384, Nodes = 9):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:03:20 PDT 2017
#    Job ID:           23014.c001
#      User:           u4443
# Resources:           neednodes=9:knl:xeonphi:flat,nodes=9:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 786384 particles using 256 threads, distributed across 9 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  7.463e-01  8.287e+11  16573.0 *
    2  5.502e-01  1.124e+12  22480.0 *
    3  5.561e-01  1.112e+12  22239.3 *
    4  5.518e-01  1.121e+12  22415.7 
    5  5.748e-01  1.076e+12  21515.2 
    6  5.911e-01  1.046e+12  20924.6 
    7  6.444e-01  9.596e+11  19192.0 
    8  5.734e-01  1.078e+12  21568.3 
    9  5.493e-01  1.126e+12  22514.9 
   10  5.497e-01  1.125e+12  22498.9 
-----------------------------------------------------
Average performance:         21518.5 +- 1103.7 GFLOP/s
Average duration:       5.764e-01 +-  3.141e-02 s
Average duration:      576.369 +- 31.414 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23014.c001
# Date: Tue Sep  5 16:03:41 PDT 2017
########################################################################
```

M = 4 case (N0 = 262,144, NSIZE = 1,048,576, Nodes = 16):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Wed Aug 30 08:25:09 PDT 2017
#    Job ID:           22590.c001
#      User:           u4443
# Resources:           neednodes=16:knl:xeonphi:flat,nodes=16:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 1048576 particles using 256 threads, distributed across 16 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  7.682e-01  1.431e+12  28626.6 *
    2  6.677e-01  1.647e+12  32932.0 *
    3  6.830e-01  1.610e+12  32198.3 *
    4  6.537e-01  1.682e+12  33641.6 
    5  6.517e-01  1.687e+12  33744.7 
    6  6.527e-01  1.685e+12  33691.8 
    7  6.678e-01  1.646e+12  32928.2 
    8  6.914e-01  1.590e+12  31805.3 
    9  6.654e-01  1.652e+12  33049.1 
   10  6.544e-01  1.680e+12  33601.5 
-----------------------------------------------------
Average performance:         33208.9 +- 647.6 GFLOP/s
Average duration:       6.624e-01 +-  1.325e-02 s
Average duration:      662.437 +- 13.248 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22590.c001
# Date: Wed Aug 30 08:25:40 PDT 2017
########################################################################
```

M = ~5 case (N0 = 262,144, NSIZE = 1,310,400, Nodes = 25):

```

```

M = ~6 case (N0 = 262,144, NSIZE = 1,572,480, Nodes = 36):

```

```

M = ~7 case (N0 = 262,144, NSIZE = 1,834,560, Nodes = 49):

```

```

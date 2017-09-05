# Strong and Weak Scaling Studies - on Implementation 11

### Log - Weak Scaling Study - Big n-body case

Given a fixed total problem size per node (262,144 particles per node. i.e. 268,419,072 interactions per node.), how does the duration and overall performance vary with the number of node?

Nodes = 1 case (N0 = 262,144, NSIZE = 262,144):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 15:42:08 PDT 2017
#    Job ID:           23003.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 262144 particles using 256 threads, distributed across 1 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  5.708e-01  1.204e+11   2408.0 *
    2  4.411e-01  1.558e+11   3115.6 *
    3  4.396e-01  1.563e+11   3126.3 *
    4  4.428e-01  1.552e+11   3103.6 
    5  4.398e-01  1.562e+11   3124.9 
    6  4.427e-01  1.552e+11   3104.9 
    7  4.396e-01  1.563e+11   3126.3 
    8  4.426e-01  1.553e+11   3105.3 
    9  4.401e-01  1.562e+11   3123.2 
   10  4.424e-01  1.553e+11   3106.5 
-----------------------------------------------------
Average performance:          3113.5 +- 9.8 GFLOP/s
Average duration:       4.414e-01 +-  1.394e-03 s
Average duration:      441.428 +- 1.394 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23003.c001
# Date: Tue Sep  5 15:42:15 PDT 2017
########################################################################
```

Nodes = 2 case (N0 = 262,144, NSIZE = 524,288):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 15:43:23 PDT 2017
#    Job ID:           23004.c001
#      User:           u4443
# Resources:           neednodes=2:knl:xeonphi:flat,nodes=2:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 524288 particles using 256 threads, distributed across 2 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.061e+00  2.592e+11   5183.6 *
    2  9.349e-01  2.940e+11   5880.5 *
    3  9.305e-01  2.954e+11   5908.0 *
    4  9.275e-01  2.963e+11   5927.0 
    5  9.269e-01  2.966e+11   5931.1 
    6  9.273e-01  2.964e+11   5928.7 
    7  9.263e-01  2.967e+11   5934.9 
    8  1.013e+00  2.713e+11   5425.9 
    9  9.758e-01  2.817e+11   5633.8 
   10  9.482e-01  2.899e+11   5797.7 
-----------------------------------------------------
Average performance:          5797.0 +- 183.4 GFLOP/s
Average duration:       9.493e-01 +-  3.111e-02 s
Average duration:      949.323 +- 31.113 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23004.c001
# Date: Tue Sep  5 15:43:39 PDT 2017
########################################################################
```

Nodes = 4 case (N0 = 262,144, NSIZE = 1,048,576):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 15:45:31 PDT 2017
#    Job ID:           23007.c001
#      User:           u4443
# Resources:           neednodes=4:knl:xeonphi:flat,nodes=4:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 1048576 particles using 256 threads, distributed across 4 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.238e+00  4.913e+11   9825.1 *
    2  1.987e+00  5.535e+11  11069.7 *
    3  1.941e+00  5.663e+11  11326.7 *
    4  1.985e+00  5.539e+11  11078.8 
    5  1.955e+00  5.623e+11  11245.9 
    6  1.979e+00  5.555e+11  11109.9 
    7  2.145e+00  5.125e+11  10249.6 
    8  1.988e+00  5.529e+11  11058.9 
    9  1.951e+00  5.635e+11  11269.5 
   10  2.160e+00  5.091e+11  10181.3 
-----------------------------------------------------
Average performance:         10884.8 +- 430.2 GFLOP/s
Average duration:       2.024e+00 +-  8.280e-02 s
Average duration:      2023.533 +- 82.803 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23007.c001
# Date: Tue Sep  5 15:46:00 PDT 2017
########################################################################
```


Nodes = 8 case (N0 = 262,144, NSIZE = 2,097,152):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 15:49:10 PDT 2017
#    Job ID:           23010.c001
#      User:           u4443
# Resources:           neednodes=8:knl:xeonphi:flat,nodes=8:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 2097152 particles using 256 threads, distributed across 8 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  4.047e+00  1.087e+12  21732.8 *
    2  3.837e+00  1.146e+12  22922.7 *
    3  3.878e+00  1.134e+12  22682.0 *
    4  3.940e+00  1.116e+12  22324.5 
    5  3.955e+00  1.112e+12  22241.5 
    6  3.860e+00  1.139e+12  22787.6 
    7  3.819e+00  1.152e+12  23033.1 
    8  3.984e+00  1.104e+12  22080.5 
    9  3.924e+00  1.121e+12  22414.2 
   10  4.055e+00  1.085e+12  21694.0 
-----------------------------------------------------
Average performance:         22367.9 +- 409.8 GFLOP/s
Average duration:       3.934e+00 +-  7.201e-02 s
Average duration:      3933.780 +- 72.012 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23010.c001
# Date: Tue Sep  5 15:50:04 PDT 2017
########################################################################
```

Nodes = 16 case (N0 = 262,144, NSIZE = 4,194,304):

```

```


Nodes = 32 case (N0 = 262,144, NSIZE = 8,388,608):

```

```

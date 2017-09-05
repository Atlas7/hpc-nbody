# Strong and Weak Scaling Studies - on Implementation 11

### Strong Scaling Study - Big n-body case (More Robust)

Given a fixed total problem size of (1,048,576 particles), how does the duration and overall performance vary with the number of processors?

Noes = 1 case

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:24:40 PDT 2017
#    Job ID:           23021.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 1048576 particles using 256 threads, distributed across 1 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  7.282e+00  1.510e+11   3020.0 *
    2  7.199e+00  1.527e+11   3054.6 *
    3  7.201e+00  1.527e+11   3054.0 *
    4  7.197e+00  1.528e+11   3055.3 
    5  7.397e+00  1.486e+11   2972.9 
    6  7.204e+00  1.526e+11   3052.6 
    7  7.347e+00  1.497e+11   2993.1 
    8  7.202e+00  1.527e+11   3053.4 
    9  7.197e+00  1.528e+11   3055.3 
   10  7.201e+00  1.527e+11   3053.8 
-----------------------------------------------------
Average performance:          3033.8 +- 32.6 GFLOP/s
Average duration:       7.249e+00 +-  7.879e-02 s
Average duration:      7249.285 +- 78.787 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23021.c001
# Date: Tue Sep  5 16:25:55 PDT 2017
########################################################################

```

Nodes = 2 Case

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:26:13 PDT 2017
#    Job ID:           23022.c001
#      User:           u4443
# Resources:           neednodes=2:knl:xeonphi:flat,nodes=2:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 1048576 particles using 256 threads, distributed across 2 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  3.974e+00  2.767e+11   5533.1 *
    2  3.654e+00  3.009e+11   6018.2 *
    3  3.662e+00  3.002e+11   6005.0 *
    4  3.653e+00  3.010e+11   6019.5 
    5  3.658e+00  3.006e+11   6012.2 
    6  3.673e+00  2.994e+11   5987.6 
    7  3.654e+00  3.009e+11   6017.9 
    8  3.855e+00  2.852e+11   5703.9 
    9  3.655e+00  3.008e+11   6016.6 
   10  3.657e+00  3.007e+11   6013.9 
-----------------------------------------------------
Average performance:          5967.4 +- 108.0 GFLOP/s
Average duration:       3.686e+00 +-  6.926e-02 s
Average duration:      3686.337 +- 69.256 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23022.c001
# Date: Tue Sep  5 16:26:57 PDT 2017
########################################################################
```

Nodes = 4 Case

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:28:36 PDT 2017
#    Job ID:           23023.c001
#      User:           u4443
# Resources:           neednodes=4:knl:xeonphi:flat,nodes=4:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 1048576 particles using 256 threads, distributed across 4 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.194e+00  5.012e+11  10023.6 *
    2  1.954e+00  5.627e+11  11254.2 *
    3  1.975e+00  5.567e+11  11133.8 *
    4  1.949e+00  5.640e+11  11280.6 
    5  2.035e+00  5.402e+11  10804.1 
    6  2.083e+00  5.277e+11  10554.8 
    7  2.016e+00  5.453e+11  10905.7 
    8  1.974e+00  5.569e+11  11138.8 
    9  2.044e+00  5.380e+11  10760.1 
   10  2.163e+00  5.083e+11  10166.8 
-----------------------------------------------------
Average performance:         10801.6 +- 342.2 GFLOP/s
Average duration:       2.038e+00 +-  6.558e-02 s
Average duration:      2037.912 +- 65.578 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23023.c001
# Date: Tue Sep  5 16:29:04 PDT 2017
########################################################################
```

Noes = 8 case

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:29:14 PDT 2017
#    Job ID:           23024.c001
#      User:           u4443
# Resources:           neednodes=8:knl:xeonphi:flat,nodes=8:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 1048576 particles using 256 threads, distributed across 8 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.262e+00  8.713e+11  17426.7 *
    2  1.160e+00  9.481e+11  18961.3 *
    3  1.066e+00  1.031e+12  20619.2 *
    4  1.112e+00  9.889e+11  19778.4 
    5  1.005e+00  1.094e+12  21876.5 
    6  1.004e+00  1.095e+12  21895.2 
    7  1.029e+00  1.069e+12  21380.5 
    8  1.030e+00  1.067e+12  21346.3 
    9  1.006e+00  1.092e+12  21849.9 
   10  1.010e+00  1.089e+12  21781.0 
-----------------------------------------------------
Average performance:         21415.4 +- 702.2 GFLOP/s
Average duration:       1.028e+00 +-  3.569e-02 s
Average duration:      1028.011 +- 35.690 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23024.c001
# Date: Tue Sep  5 16:29:39 PDT 2017
########################################################################
```

Nodes = 16 Case

```

```

Nodes = 32 Case

```

```

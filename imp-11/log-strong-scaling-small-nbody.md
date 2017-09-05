# Strong and Weak Scaling Studies - on Implementation 11

### Strong Scaling Study - Small n-body case (Less Robust)

Given a fixed total problem size of (16,384 particles), how does the duration and overall performance vary with the number of processors?

Noes = 1 case

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:17:32 PDT 2017
#    Job ID:           23016.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 16384 particles using 256 threads, distributed across 1 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.115e-01  2.408e+09     48.2 *
    2  1.842e-03  1.457e+11   2914.4 *
    3  1.808e-03  1.484e+11   2969.0 *
    4  1.805e-03  1.487e+11   2974.5 
    5  1.812e-03  1.481e+11   2962.7 
    6  1.801e-03  1.490e+11   2980.8 
    7  1.800e-03  1.491e+11   2982.7 
    8  1.790e-03  1.500e+11   2999.0 
    9  1.785e-03  1.504e+11   3007.4 
   10  1.788e-03  1.501e+11   3002.6 
-----------------------------------------------------
Average performance:          2987.1 +- 15.2 GFLOP/s
Average duration:       1.797e-03 +-  9.131e-06 s
Average duration:      1.797 +- 0.009 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23016.c001
# Date: Tue Sep  5 16:17:35 PDT 2017
########################################################################
```

Nodes = 2 Case

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:18:20 PDT 2017
#    Job ID:           23017.c001
#      User:           u4443
# Resources:           neednodes=2:knl:xeonphi:flat,nodes=2:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 16384 particles using 256 threads, distributed across 2 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.245e-01  1.196e+09     23.9 *
    2  3.118e-03  8.609e+10   1721.7 *
    3  2.526e-03  1.063e+11   2125.2 *
    4  2.575e-03  1.042e+11   2084.9 
    5  2.690e-03  9.978e+10   1995.6 
    6  2.754e-03  9.747e+10   1949.3 
    7  2.732e-03  9.825e+10   1965.0 
    8  2.927e-03  9.171e+10   1834.2 
    9  2.658e-03  1.010e+11   2019.6 
   10  2.726e-03  9.847e+10   1969.4 
-----------------------------------------------------
Average performance:          1974.0 +- 70.8 GFLOP/s
Average duration:       2.723e-03 +-  9.987e-05 s
Average duration:      2.723 +- 0.100 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23017.c001
# Date: Tue Sep  5 16:18:26 PDT 2017
########################################################################
```

Nodes = 4 Case

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:19:13 PDT 2017
#    Job ID:           23018.c001
#      User:           u4443
# Resources:           neednodes=4:knl:xeonphi:flat,nodes=4:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 16384 particles using 256 threads, distributed across 4 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  9.108e-02  2.947e+09     58.9 *
    2  4.175e-03  6.429e+10   1285.9 *
    3  3.981e-03  6.743e+10   1348.5 *
    4  3.995e-03  6.719e+10   1343.8 
    5  3.837e-03  6.995e+10   1399.1 
    6  3.998e-03  6.714e+10   1342.8 
    7  4.390e-03  6.114e+10   1222.9 
    8  3.907e-03  6.870e+10   1374.1 
    9  4.140e-03  6.484e+10   1296.7 
   10  4.002e-03  6.707e+10   1341.5 
-----------------------------------------------------
Average performance:          1331.5 +- 53.1 GFLOP/s
Average duration:       4.038e-03 +-  1.676e-04 s
Average duration:      4.038 +- 0.168 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23018.c001
# Date: Tue Sep  5 16:19:20 PDT 2017
########################################################################
```

Noes = 8 case

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 16:20:00 PDT 2017
#    Job ID:           23019.c001
#      User:           u4443
# Resources:           neednodes=8:knl:xeonphi:flat,nodes=8:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 16384 particles using 256 threads, distributed across 8 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.080e-01  2.486e+09     49.7 *
    2  6.947e-03  3.864e+10    772.8 *
    3  7.188e-03  3.734e+10    746.9 *
    4  7.215e-03  3.720e+10    744.1 
    5  6.951e-03  3.862e+10    772.3 
    6  6.933e-03  3.872e+10    774.3 
    7  6.885e-03  3.899e+10    779.7 
    8  7.043e-03  3.811e+10    762.2 
    9  6.935e-03  3.871e+10    774.1 
   10  7.122e-03  3.769e+10    753.8 
-----------------------------------------------------
Average performance:           765.8 +- 12.0 GFLOP/s
Average duration:       7.012e-03 +-  1.111e-04 s
Average duration:      7.012 +- 0.111 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 23019.c001
# Date: Tue Sep  5 16:20:14 PDT 2017
########################################################################
```

Nodes = 16 Case

```

```

Nodes = 32 Case

```

```

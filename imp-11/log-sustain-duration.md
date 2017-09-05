# Strong and Weak Scaling Studies - on Implementation 11

### Bonus: Sustain Duration with Extra Nodes (Robust up to 4 nodes)

M = 1 case (N0 = 262,144, NSIZE = 262,144):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Wed Aug 30 08:17:17 PDT 2017
#    Job ID:           22588.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 262144 particles using 256 threads, distributed across 1 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  5.734e-01  1.199e+11   2397.1 *
    2  4.897e-01  1.403e+11   2806.7 *
    3  4.895e-01  1.404e+11   2807.8 *
    4  4.897e-01  1.403e+11   2806.8 
    5  4.890e-01  1.405e+11   2810.3 
    6  4.900e-01  1.402e+11   2804.8 
    7  4.896e-01  1.404e+11   2807.4 
    8  4.898e-01  1.403e+11   2805.7 
    9  4.894e-01  1.404e+11   2808.4 
   10  4.898e-01  1.403e+11   2805.7 
-----------------------------------------------------
Average performance:          2807.0 +- 1.7 GFLOP/s
Average duration:       4.896e-01 +-  3.037e-04 s
Average duration:      489.621 +- 0.304 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22588.c001
# Date: Wed Aug 30 08:17:24 PDT 2017
########################################################################
```

M = 2 case (N0 = 262,144, NSIZE = 524,288):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Wed Aug 30 08:23:11 PDT 2017
#    Job ID:           22589.c001
#      User:           u4443
# Resources:           neednodes=4:knl:xeonphi:flat,nodes=4:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 11

Propagating 524288 particles using 256 threads, distributed across 4 nodes on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  7.714e-01  3.563e+11   7126.5 *
    2  5.748e-01  4.782e+11   9563.8 *
    3  5.818e-01  4.725e+11   9449.7 *
    4  5.663e-01  4.854e+11   9708.2 
    5  5.757e-01  4.775e+11   9549.9 
    6  5.890e-01  4.667e+11   9333.6 
    7  5.667e-01  4.850e+11   9700.8 
    8  5.757e-01  4.775e+11   9550.1 
    9  5.776e-01  4.759e+11   9517.8 
   10  5.684e-01  4.836e+11   9671.7 
-----------------------------------------------------
Average performance:          9576.0 +- 122.9 GFLOP/s
Average duration:       5.742e-01 +-  7.441e-03 s
Average duration:      574.191 +- 7.441 ms
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22589.c001
# Date: Wed Aug 30 08:23:25 PDT 2017
########################################################################
```

M = ~3 case (N0 = 262,144, NSIZE = 786,384):

```

```

M = 4 case (N0 = 262,144, NSIZE = 1048576):

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

M = ~5 case (N0 = 262,144, NSIZE = 1,310,400):

```

```

M = ~6 case (N0 = 262,144, NSIZE = 1,572,480):

```

```

M = ~7 case (N0 = 262,144, NSIZE = 1,834,560):

```

```

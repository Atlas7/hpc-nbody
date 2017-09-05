# Strong and Weak Scaling Studies - on Implementation 11

### Bonus: Sustain Duration with Extra Nodes (Robust up to 4 nodes)

M = 1 case (N0 = 262,144, NSIZE = 262,144):

```

```

M = 2 case (N0 = 262,144, NSIZE = 524,288):

```

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

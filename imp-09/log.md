# Implementation 9 - Vectorization Tuning (Remove Peel Loop Overhead by Aligning Array Access)

### Bonus: Logs

In case you'd like to see the actual output from the `make queue-knl` run at varying multiples of `NSIZE`, I've included below the logs at each Multiple `M`.

M = 1 case (N0 = 16384, NSIZE = 16384):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 03:01:58 PDT 2017
#    Job ID:           22829.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 9

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.256e-01  2.137e+09     42.7 *
    2  2.584e-03  1.039e+11   2077.6 *
    3  2.560e-03  1.048e+11   2096.9 *
    4  2.599e-03  1.033e+11   2065.6 
    5  2.593e-03  1.035e+11   2070.3 
    6  2.579e-03  1.041e+11   2081.6 
    7  2.597e-03  1.034e+11   2067.1 
    8  2.581e-03  1.040e+11   2080.1 
    9  2.600e-03  1.032e+11   2064.8 
   10  2.586e-03  1.038e+11   2076.0 
-----------------------------------------------------
Average performance:          2072.2 +- 6.5 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22829.c001
# Date: Tue Sep  5 03:02:00 PDT 2017
########################################################################

```

M = 2 case (N0 = 16384, NSIZE = 32768):

```

```

M = 4 case (N0 = 16384, NSIZE = 65536):

```

```

M = 8 case (N0 = 16384, NSIZE = 131072):

```

```

M = 16 case (N0 = 16384, NSIZE = 262144):

```

```

M = 32 case (N0 = 16384, NSIZE = 524288):

```

```

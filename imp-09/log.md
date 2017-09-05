# Implementation 9 - Vectorization Tuning (Remove Peel Loop Overhead by Aligning Array Access)

### Bonus: Logs

In case you'd like to see the actual output from the `make queue-knl` run at varying multiples of `NSIZE`, I've included below the logs at each Multiple `M`.

M = 1 case (N0 = 16384, NSIZE = 16384):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 03:27:35 PDT 2017
#    Job ID:           22842.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 8

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.071e-01  2.506e+09     50.1 *
    2  2.572e-03  1.044e+11   2087.4 *
    3  2.557e-03  1.050e+11   2099.5 *
    4  2.579e-03  1.041e+11   2081.6 
    5  2.576e-03  1.042e+11   2083.9 
    6  2.558e-03  1.049e+11   2098.7 
    7  2.561e-03  1.048e+11   2096.1 
    8  2.543e-03  1.056e+11   2111.1 
    9  2.596e-03  1.034e+11   2068.0 
   10  2.552e-03  1.052e+11   2103.6 
-----------------------------------------------------
Average performance:          2091.9 +- 13.7 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22842.c001
# Date: Tue Sep  5 03:27:37 PDT 2017
########################################################################
```

M = 2 case (N0 = 16384, NSIZE = 32768):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 03:28:32 PDT 2017
#    Job ID:           22843.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 8

Propagating 32768 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  9.971e-02  1.077e+10    215.4 *
    2  9.600e-03  1.118e+11   2236.9 *
    3  9.583e-03  1.120e+11   2240.9 *
    4  9.552e-03  1.124e+11   2248.1 
    5  9.597e-03  1.119e+11   2237.6 
    6  9.601e-03  1.118e+11   2236.6 
    7  1.115e-02  9.634e+10   1926.8 
    8  9.588e-03  1.120e+11   2239.7 
    9  9.553e-03  1.124e+11   2247.9 
   10  9.576e-03  1.121e+11   2242.5 
-----------------------------------------------------
Average performance:          2197.0 +- 110.4 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22843.c001
# Date: Tue Sep  5 03:28:34 PDT 2017
########################################################################
```

M = 4 case (N0 = 16384, NSIZE = 65536):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 03:29:32 PDT 2017
#    Job ID:           22844.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 8

Propagating 65536 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.395e-01  3.078e+10    615.6 *
    2  4.359e-02  9.853e+10   1970.6 *
    3  4.357e-02  9.859e+10   1971.7 *
    4  4.359e-02  9.852e+10   1970.4 
    5  4.352e-02  9.869e+10   1973.8 
    6  4.358e-02  9.856e+10   1971.2 
    7  4.374e-02  9.819e+10   1963.9 
    8  4.358e-02  9.855e+10   1971.0 
    9  4.358e-02  9.854e+10   1970.9 
   10  4.513e-02  9.516e+10   1903.1 
-----------------------------------------------------
Average performance:          1960.6 +- 23.6 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22844.c001
# Date: Tue Sep  5 03:29:34 PDT 2017
########################################################################
```

M = 8 case (N0 = 16384, NSIZE = 131072):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 03:30:29 PDT 2017
#    Job ID:           22845.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 8

Propagating 131072 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.828e-01  6.075e+10   1214.9 *
    2  1.992e-01  8.622e+10   1724.5 *
    3  1.978e-01  8.687e+10   1737.4 *
    4  2.021e-01  8.500e+10   1700.0 
    5  1.986e-01  8.650e+10   1730.1 
    6  1.977e-01  8.689e+10   1737.9 
    7  1.994e-01  8.615e+10   1723.0 
    8  1.977e-01  8.688e+10   1737.6 
    9  1.978e-01  8.686e+10   1737.3 
   10  1.978e-01  8.686e+10   1737.1 
-----------------------------------------------------
Average performance:          1729.0 +- 12.9 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22845.c001
# Date: Tue Sep  5 03:30:33 PDT 2017
########################################################################
```

M = 16 case (N0 = 16384, NSIZE = 262144):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 03:31:09 PDT 2017
#    Job ID:           22846.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 8

Propagating 262144 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  9.451e-01  7.271e+10   1454.3 *
    2  8.477e-01  8.107e+10   1621.4 *
    3  8.721e-01  7.880e+10   1576.0 *
    4  8.467e-01  8.116e+10   1623.3 
    5  8.478e-01  8.106e+10   1621.2 
    6  8.475e-01  8.109e+10   1621.8 
    7  8.476e-01  8.108e+10   1621.5 
    8  8.475e-01  8.109e+10   1621.7 
    9  8.474e-01  8.109e+10   1621.9 
   10  8.480e-01  8.103e+10   1620.7 
-----------------------------------------------------
Average performance:          1621.7 +- 0.7 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22846.c001
# Date: Tue Sep  5 03:31:20 PDT 2017
########################################################################
```

M = 32 case (N0 = 16384, NSIZE = 524288):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Tue Sep  5 03:31:52 PDT 2017
#    Job ID:           22847.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 8

Propagating 524288 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  3.525e+00  7.798e+10   1559.7 *
    2  3.432e+00  8.009e+10   1601.7 *
    3  3.455e+00  7.957e+10   1591.4 *
    4  3.743e+00  7.344e+10   1468.9 
    5  3.432e+00  8.009e+10   1601.9 
    6  3.453e+00  7.959e+10   1591.9 
    7  3.737e+00  7.355e+10   1471.0 
    8  3.432e+00  8.010e+10   1602.1 
    9  3.454e+00  7.957e+10   1591.5 
   10  3.435e+00  8.003e+10   1600.6 
-----------------------------------------------------
Average performance:          1561.1 +- 57.8 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22847.c001
# Date: Tue Sep  5 03:32:29 PDT 2017
########################################################################
```

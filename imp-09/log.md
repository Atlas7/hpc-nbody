### Bonus: Logs

In case you'd like to see the actual output from the `make queue-knl` run at varying multiples of `NSIZE`, I've included below the logs at each Multiple `M`.

M = 1 case (N0 = 16384, NSIZE = 16384):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Sat Aug 26 07:41:46 PDT 2017
#    Job ID:           22408.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 9

Propagating 16384 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  7.948e-02  3.377e+09     67.5 *
    2  2.229e-03  1.204e+11   2408.5 *
    3  2.211e-03  1.214e+11   2427.9 *
    4  2.256e-03  1.190e+11   2379.7
    5  2.201e-03  1.219e+11   2439.0
    6  2.218e-03  1.210e+11   2420.4
    7  2.216e-03  1.211e+11   2422.7
    8  2.229e-03  1.204e+11   2408.5
    9  2.215e-03  1.212e+11   2423.5
   10  2.218e-03  1.210e+11   2420.4
-----------------------------------------------------
Average performance:          2416.3 +- 17.1 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22408.c001
# Date: Sat Aug 26 07:41:48 PDT 2017
########################################################################
```

M = 2 case (N0 = 16384, NSIZE = 32768):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Mon Aug 28 03:39:02 PDT 2017
#    Job ID:           22454.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 9

Propagating 32768 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  8.933e-02  1.202e+10    240.4 *
    2  8.277e-03  1.297e+11   2594.5 *
    3  8.282e-03  1.296e+11   2592.9 *
    4  8.269e-03  1.299e+11   2597.0
    5  8.258e-03  1.300e+11   2600.4
    6  8.299e-03  1.294e+11   2587.6
    7  8.259e-03  1.300e+11   2600.1
    8  8.269e-03  1.298e+11   2596.9
    9  8.308e-03  1.292e+11   2584.7
   10  8.266e-03  1.299e+11   2597.9
-----------------------------------------------------
Average performance:          2594.9 +- 5.7 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22454.c001
# Date: Mon Aug 28 03:39:04 PDT 2017
########################################################################
```

M = 4 case (N0 = 16384, NSIZE = 65536):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Mon Aug 28 03:54:17 PDT 2017
#    Job ID:           22455.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 9

Propagating 65536 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  1.132e-01  3.793e+10    758.6 *
    2  3.853e-02  1.115e+11   2229.4 *
    3  4.014e-02  1.070e+11   2139.9 *
    4  3.856e-02  1.114e+11   2227.9
    5  3.882e-02  1.106e+11   2212.5
    6  3.858e-02  1.113e+11   2226.3
    7  3.858e-02  1.113e+11   2226.3
    8  3.857e-02  1.113e+11   2226.9
    9  3.869e-02  1.110e+11   2220.3
   10  3.853e-02  1.115e+11   2229.2
-----------------------------------------------------
Average performance:          2224.2 +- 5.4 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22455.c001
# Date: Mon Aug 28 03:54:19 PDT 2017
########################################################################
```

M = 8 case (N0 = 16384, NSIZE = 131072):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Mon Aug 28 03:56:03 PDT 2017
#    Job ID:           22456.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 9

Propagating 131072 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  2.899e-01  5.927e+10   1185.3 *
    2  1.874e-01  9.166e+10   1833.3 *
    3  1.890e-01  9.092e+10   1818.4 *
    4  1.877e-01  9.154e+10   1830.9
    5  1.885e-01  9.115e+10   1822.9
    6  1.878e-01  9.149e+10   1829.9
    7  1.874e-01  9.166e+10   1833.2
    8  1.889e-01  9.094e+10   1818.9
    9  1.874e-01  9.166e+10   1833.2
   10  1.875e-01  9.163e+10   1832.7
-----------------------------------------------------
Average performance:          1828.8 +- 5.2 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22456.c001
# Date: Mon Aug 28 03:56:07 PDT 2017
########################################################################
```

M = 16 case (N0 = 16384, NSIZE = 262144):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Mon Aug 28 07:33:21 PDT 2017
#    Job ID:           22474.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 9

Propagating 262144 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  9.273e-01  7.411e+10   1482.1 *
    2  8.352e-01  8.228e+10   1645.6 *
    3  8.359e-01  8.221e+10   1644.2 *
    4  8.365e-01  8.215e+10   1643.1
    5  8.353e-01  8.227e+10   1645.5
    6  8.349e-01  8.231e+10   1646.2
    7  8.352e-01  8.228e+10   1645.6
    8  8.570e-01  8.019e+10   1603.8
    9  8.353e-01  8.227e+10   1645.4
   10  8.416e-01  8.165e+10   1633.0
-----------------------------------------------------
Average performance:          1637.5 +- 14.4 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22474.c001
# Date: Mon Aug 28 07:33:31 PDT 2017
########################################################################
```

M = 32 case (N0 = 16384, NSIZE = 524288):

```
########################################################################
# Colfax Cluster - https://colfaxresearch.com/
#      Date:           Mon Aug 28 07:37:16 PDT 2017
#    Job ID:           22475.c001
#      User:           u4443
# Resources:           neednodes=1:knl:xeonphi:flat,nodes=1:knl:xeonphi:flat,walltime=24:00:00
########################################################################


NBODY Version 9

Propagating 524288 particles using 256 threads on CPU...

 Step    Time, s Interact/s  GFLOP/s
    1  3.514e+00  7.821e+10   1564.3 *
    2  3.373e+00  8.149e+10   1629.8 *
    3  3.492e+00  7.871e+10   1574.2 *
    4  3.566e+00  7.707e+10   1541.5
    5  3.373e+00  8.149e+10   1629.9
    6  3.373e+00  8.149e+10   1629.8
    7  3.646e+00  7.539e+10   1507.9
    8  3.372e+00  8.151e+10   1630.3
    9  3.427e+00  8.021e+10   1604.2
   10  3.374e+00  8.148e+10   1629.5
-----------------------------------------------------
Average performance:          1596.1 +- 46.9 GFLOP/s
-----------------------------------------------------
* - warm-up, not included in average


########################################################################
# Colfax Cluster
# End of output for job 22475.c001
# Date: Mon Aug 28 07:37:53 PDT 2017
########################################################################
```

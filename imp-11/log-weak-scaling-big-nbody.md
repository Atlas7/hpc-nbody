# Implementation 11 - Cluster Communication Tuning (For Scalability)

### Log - Weak Scaling Study - Big n-body case

Given a fixed total problem size per node (262,144 particles per node. i.e. 268,419,072 interactions per node.), how does the duration and overall performance vary with the number of node?

Nodes = 1 case (N0 = 262,144, NSIZE = 262,144):

```

```

Nodes = 2 case (N0 = 262,144, NSIZE = 524,288):

```

```

Nodes = 4 case (N0 = 262,144, NSIZE = 1,048,576):

```

```


Nodes = 8 case (N0 = 262,144, NSIZE = 2,097,152):

```

```

Nodes = 16 case (N0 = 262,144, NSIZE = 4,194,304):

```

```


Nodes = 32 case (N0 = 262,144, NSIZE = 8,388,608):

```

```

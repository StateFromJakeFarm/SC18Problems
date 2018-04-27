# Longest Cycle

The eighth wonder of the world is King Arthur’s famous labyrinth built on an unknown island to entertain foreign kings. The labyrinth consists of rooms connected via passages. When a foreign king wants to try to outsmart Arthur, he is given a map of the labyrinth prior to entering so he can figure out the length of the rope he might need to carry so as not to get lost. Once he calculates the length of the rope he might need to carry, he is provided with the rope of that length and the map is taken away from him. The major problem of the labyrinth is a large number of cycles, and the length of the rope must be at least as long as the longest simple cycle (“simple” means the same room does not occur twice in a cycle). All passages between any two rooms have the same length, and all rooms are reachable from all other rooms via the passages. Your task is to calculate the length of the longest cycle measured as the number of passages (edges) on the cycle.

## Input Format

The first line contains two space-separated integers, **_N_** (the number of rooms) and **_M_** (the number of passages).
The next **_M_** lines contain two space-separated integers, **_u_** and **_v_**, to indicate that a passage connects rooms **_u_** and **_v_**.

## Constraints
* **9** <= **_N_** <= **300**
* **12** <= **_M_** <= **436**

## Output Format

Print a single integer, the length of the longest cycle followed by a newline.

## Sample Input
```
6 8
0 1
0 4
0 5
1 2
2 3
2 4
3 4
4 5
```

### Sample Output
```
6
```
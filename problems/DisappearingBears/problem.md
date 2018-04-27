# Disappearing Bears

---

Bear-stealing shock troops have begun pouring through wormholes in major parks throughout the nation. For each hour a wormhole is open, the shock troops successfully steal one bear from the surrounding area. As the owner of the only bear-optimized cargo airlift helicopter in the country, you have been called upon to rescue as many bears from the invaders as possible.

Your own experimental wormhole technology will allow you to immediately deploy to any park, but only once. From there you must travel between parks by air, while the clock ticks and bears are stolen. You will be working around the clock to save as many bears as possible, until all bears are either rescued or stolen.

## Input Format

The first line of the input consists of two integers:

* **N** - The number of parks.
* **M** - The number of usable airspace corridors between parks.

The second line consists of **N** integers, the number of bears initially in each of the parks.

The remaining **M** lines consist of three integers each:

* The first park **U<sub>i</sub>** connected by the corridor.
* The second park **V<sub>i</sub>** connected by the corridor.
* The number of hours **T<sub>i</sub>** it will take to traverse that corridor.

All corridors are two-way with an equal cost in both directions. No two parks will have multiple corridors directly between them.

## Constraints

* 1 ≤ **N** ≤ 64
* 0 ≤ **M** ≤ 64
* 1 ≤ **T<sub>i</sub>** ≤ 12

## Output Format

The output should consist of three integers:

* The number of the park to deploy at to save the most bears.
* The maximum number of bears that can be saved by deploying at that park.
* The number of bears that cannot be saved.

If two different deployment points could save the most bears, print the one with the lowest number.

## Sample Input

```
4 4
7 5 9 7
1 2 1
2 3 4
3 4 6
4 1 2
```

### Sample Output

```
4 16 12
```

### Explanation

The input represents the following graph:

```
(1) [7]--1--[5] (2)
     |       |
     2       4
     |       |
(4) [7]--6--[9] (3)
```

There are 7 + 5 + 7 + 9 = **28** total bears. The optimal bear recovery path is `[7]--2->[7]--1->[5]--4->[9]`

* Deploying at park 4 will save 7 bears immediately.
* Flying to park 1 will take 2 hours, and will save 7 - 2 = **5** bears.
* Flying to park 2 will take 1 hour, for a total of 3, and will save 5 - 3 = **2** bears.
* Flying to park 3 will take 4 hours, for a total of 7, and will save 9 - 7 = **2** bears.

A total of 7 + 5 + 2 + 2 == **16** beras were saved out of 28, and our deployment park was park 4, so the output is `4 16 12`.


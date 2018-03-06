# Delivery Man

---

You've just been promoted from stockroom grunt to full-time package deliveryman at Chico's post office!  You're ecstatic about this new promotion, but after your first day on the job, you notice that Chico's downtown area is rather confusing to navigate because of its many nonsensical one-way streets.  In order to make your delivery runs more efficient, you decide to write a program to calculate the shortest travel times between some of the addresses in each neighborhood so you can have an idea of how long it will take you to deliver the more time-critical packages.

Each neighborhood contains **N** addresses and **M** one-way streets.

There are **Q** routes whose shortest distances you need to know.<br>


**Input Format**

The first line contains two space-separated integers, **N** and **M** respectively.<br>
The next **M** lines each consist of three space-separated integers, **x**, **y**, and **r**, where **x** is the address at which the one-way street begins, and **y** is the address at which it ends.  **r** is the amount of time it takes you to drive along the street.<br>
The next line contains a single integer **Q**, denoting the number of routes your program must consider.<br>
The next **Q** lines each contain two space-separated integers **a** and **b**, denoting that you must drive *from **a** to **b*** to deliver a time-critical package.<br>

_NOTE:_ If there are streets between the same pair of addresses with different travel times, the last one (most recent) is to be considered as the _only_ travel time between them.<br>

**Constraints**

2 <= **N** <= 400<br>
1 <= **M** <= **N** * (**N**-1) / 2<br>
1 <= **Q** <= 10000<br>
1 <= **x**, **y** <= **N**<br>
1 <= **r** <= 350<br>

**Output Format**

For each pair of addresses **a** and **b**, print out a single line containing a single integer representing the shortest amount of time it will take you to deliver a package from address **a** to **b** using one-way streets.  If there is no way to travel from **a** to **b** on one-way streets, print -1.<br>


**Sample Input**

```text
4 5
1 2 5
1 4 24
2 4 6
3 4 4
3 2 7
3
1 2
3 1
1 4
```

**Sample Output**

```text
5
-1
11
```

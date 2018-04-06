#Mandragora Forest

The evil forest is guarded by vicious mandragoras. Each mandragora has health points (**1** <= **_i_** <= **_N_**).

Garnet and her pet begin their journey through the evil forest with **_S_** = **1** strength points and **_P_** = **0** experience points. For each undefeated mandragora **_i_**, she can perform either of the following actions:

* Garnet's pet _eats_ mandragora **_i_**. This increments **_S_** by **1** and defeats mandragora **_i_**.
* Garnet's pet _battles_ mandragora **_i_**. This increases **_P_** by **_S_** * **_H[i]_** experience points and defeats mandragora **_i_**.

Each mandragora can only be defeated once, and Garnet can defeat the mandragoras in any order. Given the respective health points for each mandragora, can you find the maximum number of experience points she can earn from defeating all **_N_** mandragoras?

###Input Format

The first line contains an integer, **_T_**, denoting the number of test cases. Each test case is described over two lines:

1. The first line contains a single integer, **_N_**, denoting the number of mandragoras in the forest.
2. The second line contains **_N_** space-separated integers describing the respective health points for the mandragoras (i.e., **_H[1]_**, **_H[2]_**,..., **_H[N]_**).

###Constraints

* **1** <= **_T_** <= **10^5**
* **1** <= **_N_** <= **10^5**
* **1** <= **_H[i]_** <= **10^7**, where **1** <= **_i_** <= **_N_**
* The sum of all **_N_**s in a single test case is <= **10^6**

###Output Format

For each test case, print a single line with an integer denoting the maximum number of experience points that Garnet can earn.

###Sample Input
<code>
<pre>
1
3
3 2 2
<pre>
</code>

###Sample Output
<code>
10
</code>
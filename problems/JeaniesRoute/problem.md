# Jeanie's Route

Byteland has **_N_** cities (numbered from **1** to **_N_**) and bidirectional roads. It is guaranteed that there is a route from any city to any other city.

Jeanie is a postal worker who must deliver **_K_** letters to various cities in Byteland. She can start and end her delivery route in any city. Given the destination cities for **_K_** letters and the definition of each road in Byteland, find and print the minimum distance Jeanie must travel to deliver all letters.

**Note:** The letters can be delivered in any order.

## Input Format

The first line contains two space-separated integers, **_N_** (the number of cities) and **_K_** (the number of letters), respectively.
The second line contains **_K_** space-separated integers describing the delivery city for each letter.
Each line **_i_** of the **_N-1_** subsequent lines contains **3** space-separated integers describing a road as **_ui_** **_vi_** **_di_**, where **_di_** is the distance (length) of the bidirectional road between cities **_ui_** and **_vi_**.

## Constraints
* **2** <= **_K_** <= **_N_** <= 10<sup>5</sup>
* **1** <= **_di_** <= 10<sup>3</sup>
* Byteland is a weighted undirected acyclic graph.

## Output Format

Print the minimum distance Jeanie must travel to deliver all **_K_** letters.

## Sample Input
```
5 3
1 3 4
1 2 1
2 3 2
2 4 2
3 5 3
```

## Sample Output
```
6
```

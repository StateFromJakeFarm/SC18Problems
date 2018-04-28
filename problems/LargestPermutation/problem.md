# Largest Permutation
You are given an array of the first __*N*__ natural numbers, in an unknown order. You can swap any two elements of the array. You can make at most __*K*__ swaps. What is the largest permutation, in numerical order, that you can make?

## Input Format

The first line of the input contains two integers, __*N*__ and __*K*__, the size of the input array and the maximum swaps you can make, respectively. The second line contains some permutation of the first __*N*__ natural numbers.

## Constraints

- 1 ≤ __*N*__ ≤ 10<sup>5</sup>
- 1 ≤ __*K*__ ≤ 10<sup>9</sup>

## Output Format

Print the largest permutation you can make with __at most *K*__ swaps.

## Sample Input 0
```
5 1
4 2 3 5 1
```
### Sample Output
```
5 2 3 4 1
```
### Explanation
The maximum permutation that can be made with a single swap is the swap of 4 and 5 making the array [5,2,3,4,1]

## Sample Input 1
```
3 1 
2 1 3
```
### Sample Output
```
3 1 2
```
### Explanation
With 1 swap we can get [1,2,3],[3,1,2], or [2,3,1]. Of those [3,1,2] is the largest permutation.
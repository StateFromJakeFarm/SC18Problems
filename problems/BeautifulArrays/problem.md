# Beautiful Arrays

---

Consider an array of __*n*__ distinct integers, __*A = [a<sub>0</sub>, a<sub>1</sub>, ... , a<sub>n - 1</sub>]*__. An array is _beautiful_ if the sum of __*|a<sub>i</sub> - a<sub>i - 1</sub>|*__ among __*0 < i < n*__ is the minimum possible.

Given the array __*A*__, find and print the minimum number of swaps that should be performed in order to make the array _beautiful_.

## Input Format

The first line contains a single integer, __*n*__, denoting the number of elements in the array __*A*__. The second line contains __*n*__ space-separated integers describing the respective distinct values of __*a<sub>0</sub>, a<sub>1</sub>, ... , a<sub>n - 1</sub>*__.

## Constraints

- 1 ≤ __*n*__ ≤ 10<sup>5</sup>
- 1 ≤ __*a<sub>i</sub>*__ ≤ 10<sup>9</sup>

## Output Format

Print the minimum number of swaps that should be performed in order to make the array _beautiful_.

## Sample Input

```
4
2 5 3 1
```

### Sample Output

```
2
```

### Explanation

Let's define array __*B* = [1,2,3,5]__ to be the beautiful reordering of array __*A*__, as the sum of the absolute values of differences between adjacent elements is minimal among all permutations and only two swaps (__1__ with __2__ and then __2__ with __5__) were performed.

# Pairs

---

You will be given an array of integers and a target value. Determine the number of pairs of array elements that have a difference equal to the target value.

For example, given an array of [1,2,3,4] and a target value of 1, we have three pairs meeting the condition. 2 - 1 = 1, 3 - 2 = 1, and 4 - 3 = 1.

## Input Format

The first line contains __*n*__ and __*k*__, the number of array elements and the target value.

The second line contains __*n*__ space-separated integers of the array.

## Constraints

- 2 ≤ __*n*__ ≤ 10<sup>5</sup>
- 0 < __*k*__ < 10<sup>9</sup>
- each integer element __*arr<sub>i</sub>*__, will conform to 0 < __*arr<sub>i</sub>*__ < 2<sup>31</sup> - 1
- each integer __*arr<sub>i</sub>*__ will be unique

## Output Format

An integer representing the number of pairs of integers whose difference is __*k*__.

## Sample Input
```
5 2
1 5 3 4 2
```

### Sample Output
```
3
```

### Explanation

There are 3 pairs of integers in the set with a difference of 2: [5,3], [4,2], and [3,1].
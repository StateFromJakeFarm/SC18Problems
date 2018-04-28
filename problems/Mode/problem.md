# Mode

---

Given a array __*S*__ containing __*n*__ elements, find the mode of the array. (The mode is the value that appears most often)

If the set has multiple modes, output the one with the smallest value.

## Input Format

The first line contains an integer __*n*__, the number of values in the array.

The second line contains __*n*__ space-seperated integers describing the values of the elements of the array, __*S<sub>0</sub>, S<sub>1</sub>,...,S<sub>n - 1</sub>*__

## Constraints

- 1 ≤  __*n*__ ≤ 10<sup>5</sup>
- 1 ≤ __*S<sub>i</sub>*__ ≤ 10<sup>3</sup>

## Output Format

Print a single integer denoting the value that occurs most frequently in the array. If two values are tied for most frequent occurrence, print the one that is smaller.

## Sample Input
```
5
5 10 9 5 1
```
### Sample Output
```
5
```

### Explanation
All values in the array occur only once, except for 5, which occurs twice.
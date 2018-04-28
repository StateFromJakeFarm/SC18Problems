# Square Subsequences

A string is called a square string if it can be obtained by concatenating two copies of the same string. For example, "abab", "aa" are square strings, while "aaa", "abba" are not. Given a string, how many (non-empty) subsequences of the string are square strings? A subsequence of a string can be obtained by deleting zero or more characters from it, and maintaining the relative order of the remaining characters.

## Input Format

The first line contains the number of test cases, **_T_**.<br>
**_T_** test cases follow. Each case contains a string, **_S_**.

## Output Format

Output **_T_** lines, one for each test case, containing the required answer modulo **1000000007**.

## Constraints:
* **1** <= **_T_** <= **20**
* **_S_** will have at most **200** lowercase characters ('a' - 'z').

## Sample Input
```
3
aaa
abab
baaba
```

## Sample Output
```
3
3
6
```

## Explanation

For the first case, there are 3 subsequences of length 2, all of which are square strings.<br>
For the second case, the subsequences "abab", "aa", "bb" are square strings.<br>
Similarly, for the third case, "bb", "baba" (twice), and "aa" (3 of them) are the square subsequences.
#Minimum Loss

---

Lauren has a chart of distinct projected prices for a house over the next __*n*__ years, where the price of the house in the __*i<sup>th</sup>*__ year is __*p<sub>i</sub>*__. She wants to purachse and resell the house at a minimal *loss* according to the following rules:

* The house cannot be sold at a price greater than or equal to the price it was purchased at (i.e., it must be resold at a loss).
* The house cannot be resold within the same year it was purchased.

Find and print the _minimum_ amount of money Lauren must lose if she buys the house and resells it within the next __*n*__ years.

_Note_: It's guarenteed that a valid answer exists.

##Input Format

The first line contains an integer __*n*__, denoting the number of years of house data.

The second line contains __*n*__ space-separated long integers describing the respective values of __*p<sub>1</sub>*__, __*p<sub>2</sub>*__,..., __*p<sub>n</sub>*__.

##Constraints

- 2 ≤ __*n*__ ≤ 2 x 10<sup>5</sup>
- 1 ≤ __*p<sub>i</sub>*__ ≤ 10<sup>16</sup>
- All the prices are distinct.
- It's guaranteed that a valid answer exists.

##Output Format

Print a single integer denoting the minimum amount of money Lauren must lose if she buys and resells the house within the next __*n*__ years.

###Sample Input 0
```
3
5 10 3
```
###Sample Output 0
```  
2
```
###Explanation 0
Lauren buys the house in year 1 at price __*p<sub>1</sub>*__ = 5 and sells it in year 3 at __*p<sub>3</sub>*__ = 3 for a minimal loss of 5 - 3 = 2.

###Sample Input 1
```
5
20 7 8 2 5
```
###Sample Output 1
```
2
```
###Explanation 1
Lauren buys the house in year 2 at price __*p<sub>2</sub>*__ = 7 and sells it in year 5 at __*p<sub>5</sub>*__ = 5 for a minimal loss of 7 - 5 = 2.
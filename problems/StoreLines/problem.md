#Store Lines

---

You're at a store on a quiet day and observe that none of the cashiers have any customers.

Suddenly a group of **N** customers finish shopping and form a single line. These customers can be numbered 1,2,3,...,N with the first in line being customer 1, and the last in line being customer N. The store has **K** cashiers, also numbered 1,2,3,...,K each who can handle one customer at a time.

However, the speed of each cashier varies, each cashier takes **S<sub>i</sub>** minutes per customer. Regardless of what the customer is buying, cashier **i** (1 ≤ **i** ≤ **K**) will take **S<sub>i</sub>** minutes to finish with the customer. 

Because the cashiers don't all work at the same speed, the order the customers leave in won't necessarily be the same order they formed the line in. You're curious about the order the customers leave in. 

The first customer in line simply goes to cashier 1, the second person in line to cashier 2, and so on. When a cashier finishes with a customer, that customer leaves immediately and the next person in line immediately moves to the now free cashier. _Customers do not wait in line if there is an available cashier, even if doing so would save them time._ If two or more cashiers would finish with their respective customers at the same time, assume that the customers finish in the same order they arrived in. 

Given **N**, the number of customers, **K**, the number of cashiers, and the value **S<sub>i</sub>** for each cashier, find the order that the customers will leave in. 


##Input Format

The first line contains a single integer **N** denoting the number of customers.

The second line contains a single integer **K** denoting the number of cashiers.

The third line contains **K** space-separated integers, denoting the time it takes each cashier to handle one customer. (i.e. **S<sub>1</sub>,S<sub>2</sub>,...,S<sub>K</sub>**)

##Constraints

5 ≤ **N** ≤ 10,000

2 ≤ **K** ≤ 100

1 ≤ **S<sub>i</sub>** ≤ 200

##Output Format

Print **K** integers seperated by spaces. Each integer represents the order the customers were in in the orginal line. The integers should be output in the order they leave the store in. 

After all the customer numbers have been output, print a newline to denote the end. 

##Sample Input

```
7
3
4 2 7
```

##Sample Output

```
2 1 4 6 3 5 7
```

##Explanation

There are seven customers and three cashiers. The first three customers pair off with their respective cashiers.

After two minutes, cashier 2 finishes, so customer 2 leaves, and cashier 2 starts with the next person in line, customer 4. Cashier 1 has two minutes of work left, and cashier 3 has 5 minutes of work left.

After two more minutes cashier 1 and cashier 2 both finish. Because customer 1 arrived first, they leave first, and cashier 1 takes customer 5 from the line. Then customer 4 leaves, and cashier 2 takes customer 6. Cashier 3 still has three minutes of work left.

After two more minutes cashier 2 finishes again, and customer 6 leaves. Cashier 2 takes customer 7 from the line. Cashier 1 has two minutes of work left, and cashier 3 has one minute of work left.

After one more minute cashier 3 finishes with customer 3, and they leave. Because there is no one left in line, cashier 3 does nothing.  Cashier 1 and cashier 2 both have two minutes of work left.

Finally, after two more minutes, cashier 1 and cashier 2 both finish. Because customer 5 arrived first, they also leave first. Then customer 7 leaves.
#Store Lines

---

Alice is at the store when she notices that none of the cashiers have any customers.

Suddenly a group of __*N*__ customers finish shopping and form a line. The store has __*K*__ cashiers, each of whom can handle only one customer at a time.

However, the speed of each cashier varies, each cashier takes __*S<sub>k</sub>*__ minutes per customer, regardless of what the customer is buying.

Alice notices that the cashiers don't work at the same speed, and gets curious about what order the customers will leave in.

When the line first forms, the first customer goes to cashier 1, the second to cashier 2, and so on. From then on, the customer at the front of the line simply moves to a cashier as one becomes availible. If two or more customers would finish at the same time, assume they finish in the same order they arrived in.

Given __*N*__, the number of customers, __*K*__, the number of cashiers, and the time it takes for each cashier to finish, __*S<sub>k</sub>*__, find the order that the customers will leave in. 


##Input Format

The first line contains a single integer __*N*__ denoting the number of customers.

The second line contains a single integer __*K*__ denoting the number of cashiers.

The third line contains __*K*__ space-separated integers, denoting the time it takes each cashier to handle one customer. (i.e. __*S<sub>1</sub>,S<sub>2</sub>,...,S<sub>K</sub>*__)

##Constraints

5 ≤ __*N*__ ≤ 10,000

2 ≤ __*K*__ ≤ 100

1 ≤ __*S<sub>k</sub>*__ ≤ 200

##Output Format

Print __*K*__ integers seperated by spaces. Each integer represents the position that a person was in from the original line, and they should be printed in the order the customers leave in.

###Sample Input

```
7
3
4 2 7
```

###Sample Output

```
2 1 4 6 3 5 7
```

###Explanation

There are seven customers and three cashiers. The first three customers pair off with their respective cashiers.

After two minutes, cashier 2 finishes, so customer 2 leaves, and cashier 2 starts with the next person in line, customer 4. Cashier 1 has two minutes of work left, and cashier 3 has 5 minutes of work left.

After two more minutes cashier 1 and cashier 2 both finish. Because customer 1 arrived first, they leave first, and cashier 1 takes customer 5 from the line. Then customer 4 leaves, and cashier 2 takes customer 6. Cashier 3 still has three minutes of work left.

After two more minutes cashier 2 finishes again, and customer 6 leaves. Cashier 2 takes customer 7 from the line. Cashier 1 has two minutes of work left, and cashier 3 has one minute of work left.

After one more minute cashier 3 finishes with customer 3, and they leave. Because there is no one left in line, cashier 3 does nothing.  Cashier 1 and cashier 2 both have two minutes of work left.

Finally, after two more minutes, cashier 1 and cashier 2 both finish. Because customer 5 arrived first, they also leave first. Then customer 7 leaves.
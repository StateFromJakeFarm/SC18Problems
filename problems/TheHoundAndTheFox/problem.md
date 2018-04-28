# The Hound and the Fox

---

A dog is chasing a fox down a long straight path. The two start at different positions and run at different speeds. 

We'd like to find the time when the dog will catch the fox. However, every __*n*__ seconds after starting the chase the dog encounters an obstacle slowing it down. The fox however can quickly avoid these obstacles without slowing down. If the two meet at an obstacle, the dog can catch the fox, otherwise the dog has to spend __*t*__ seconds traversing it. 

Given the distance the fox starts ahead of the dog, __*d*__, the speed of both, __*S<sub>dog</sub>, S<sub>fox</sub>*__, the time between obstacles __*n*__, and the time the obstacles delay the dog __*t*__, find and print the time until the dog will catch the fox, or "Never" if the dog won't catch up. 

## Input Format

The first line contains a single integer __*d*__ the distance the fox is ahead at the start of the chase.

The second line contains two space-seperated integers __*S<sub>dog</sub>*__, __*S<sub>fox</sub>*__ the speed of the dog and the fox. 

The third line contains two space-seperated integers: __*n*__, the time between obstacles; and __*t*__, the time spent by the dog on each obstacle. 

## Constraints

- 0 ≤ __*d*__ ≤ 1,000
- 0 ≤ __*S<sub>dog</sub>*__, __*S<sub>fox</sub>*__ ≤ 100
- 1 ≤ __*n*__ ≤ 50
- 0 ≤ __*t*__ ≤ 50

## Output Format

If the dog will catch the fox, print a single integer denoting the number of seconds it will take until they meet.

If the dog will not catch the fox, print the string "Never".

## Sample Input
```
100
50 20
2 2
```

### Sample Output
```
10
```

### Explanation

The dog starts 100 units behind the fox. He runs for 2 seconds before encountering an obstacle, in that time he closes the distance to 40 units. Then as he stops for 2 seconds, the fox widens their gap to 80.

The dog then runs for another 2 seconds, closing the gap to 20, before stopping, where the gap widens to 60.

Finally the dog runs for another 2 seconds, and he catches the fox at the next obstacle.

Adding up all these times, 6 seconds of running plus 4 seconds delay from obstacles, we get the answer, 10 seconds.
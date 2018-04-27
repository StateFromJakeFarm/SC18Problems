# Counting Valleys

---

Gary is a avid hiker. He tracks his hikes meticulously, paying attention to the smallest details. During his last hike he took exactly __*n*__ steps. For every step he took, he noted if it was an uphill, U, or a downhill, D, step. Gary's hike started and ended at sea level, and each step up or down represents a 1 unit change in altitude. Also, consider the following defintions:

- A mountain is a sequence of steps above sea level, begining with a step up from sea level, and ending with a step down to sea level.
- A valley is a sequence of steps below sea level, begining with a step down from sea level, and ending with a step up to sea level. 

Given Gary's sequence of steps during his last hike, find the number of valleys he traveled through. 

## Input Format

The first line contains a single integer __*n*__, the number of steps in Gary's hike.

The second line contains a single string __*s*__, of n characters describing his hike.

## Constraints

- 2 ≤ __*n*__ ≤ 10<sup>6</sup>
- Every character in the string __*s*__ is either 'U' or 'D'

## Output Format

Print a single integer denoting the number of valleys Gary walked through during his hike.

## Sample Input
```
8
UDDDUDUU
```

## Sample Output
```
1
```

## Explanation

If we represent _ as sea level, a step up as / and a step down as \, Gary's hike can be drawn as
```
 
_/\      _
   \    /
    \/\/
```

We can see that he enters and leaves one valley.
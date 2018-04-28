# Sir Pinski's Triangle
The brave knight Sir Pinski likes to doodle in his off time. His squire Dan has
noticed an interesting pattern in one of his more recent designs, a
self-similar triangular shape. Dan believes that Sir Pinski's triangle may also
be possible to encode in a grid, by starting with the basic shape:

```
*
**
* *
****
```

Then placing two copies of the shape so far below its bottom corners:

```
*
**
* *
****
*   *
**  **
* * * *
********
```

Then repeating the process, each time placing two more copies of the shape so
far below its two bottom corners. Dan would like to develop an algorithm for
the cutting-edge Water-Mill Computational Device to prove to Sir Pinski that
his triangle is of mathematical interest.

## Input Format

The input is a single integer **N**, the number of lines of Sir Pinski's
triangle to print.

## Constraints

1 ≤ **N** ≤ 64

## Output Format

Print the first **N** lines of Sir Pinski's triangle, with stars (`*`) where
the pattern is filled in and spaces where it is not.

## Sample Input

```
5
```

### Sample Output

```
*
**
* *
****
*   *
```

# LC-754 - Reach a Number

You are standing at position `0` on an infinite number line. There is a goal at position `target`.

On each move, you can either go left or right. During the `n`-th move (starting from 1), you take `n` steps.

Return the minimum number of steps required to reach the destination.

> * Difficulty: **EASY**

---
## Examples

```
Input: target = 3
Output: 2
Explanation:
On the first move we step from 0 to 1.
On the second step we step from 1 to 3.
```

```
Input: target = 2
Output: 3
Explanation:
On the first move we step from 0 to 1.
On the second move we step  from 1 to -1.
On the third move we step from -1 to 2.
```

---
## Notes

* `target` will be a non-zero integer in the range `[-10^9, 10^9]`.

---
## Follow Up

1. What if the matrix is stored on disk, and the memory is limited such that you can only load at most one row of the matrix into the memory at once?
2. What if the matrix is so large that you can only load up a partial row into the memory at once?

---
## Solutions

1. Math Approach
    * Time complexity: $O(\log{n})$
    * Space complexity: $O(1)$
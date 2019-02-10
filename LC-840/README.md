# LC-840 - Magic Squares In Grid

A $3 \times 3$ magic square is a $3 \times 3$ grid filled with distinct numbers **from 1 to 9** such that each row, column, and both diagonals all have the same sum.

Given an `grid` of integers, how many $3 \times 3$ "magic square" subgrids are there?  (Each subgrid is contiguous).

> * Difficulty: **EASY**

---
## Examples

```
Input:
[[4,3,8,4],
 [9,5,1,9],
 [2,7,6,2]]
Output: 1
Explanation:
The following subgrid is a 3 x 3 magic square:
438
951
276

while this one is not:
384
519
762

In total, there is only one magic square inside the given grid.
```

---
## Notes

* `1 <= grid.length <= 10`
* `1 <= grid[0].length <= 10`
* `0 <= grid[i][j] <= 15`

---
## Solutions

1. Brute Force
    * Time complexity: $O(m \times n)$
    * Space complexity: $O(1)$
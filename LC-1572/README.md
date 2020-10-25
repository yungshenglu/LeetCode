# LC-1572 - Matrix Diagonal Sum

Given a square matrix `mat`, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

> * Difficulty: **EASY** 

---
## Examples

![](../res/img/LC-1572.png)

```
Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: 
Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.
```

```
Input: mat = [[1,1,1,1],
              [1,1,1,1],
              [1,1,1,1],
              [1,1,1,1]]
Output: 8
```

```
Input: mat = [[5]]
Output: 5
```

---
## Notes

* `n == mat.length == mat[i].length`
* `1 <= n <= 100`
* `1 <= mat[i][j] <= 100`

---
## Solutions

1. Linear Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$

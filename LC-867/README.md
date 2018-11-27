# LC-867 - Transpose Matrix

Given a matrix `A`, return the transpose of `A`.

The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

> * Difficulty: **EASY**

---
## Examples

```
Input: [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
```

```
Input: [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
```

---
## Notes

* $1 \le A.length \le 1000$
* $1 \le A[0].length \le 1000$

---
## Solutions

1. Copy Directly
    * Time complexity: $O(n \times m)$
    * Space complexity: $O(n \times m)$
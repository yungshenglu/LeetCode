# LC-566 - Reshape the Matrix

In MATLAB, there is a very useful function called 'reshape', which can reshape a matrix into a new one with different size but keep its original data.

You're given a matrix represented by a two-dimensional array, and two positive integers r and c representing the row number and column number of the wanted reshaped matrix, respectively.

The reshaped matrix need to be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

> * Difficulty: **EASY**

---
## Examples

```
Input: 
nums = 
[[1,2],
 [3,4]]
r = 1, c = 4

Output: 
[[1,2,3,4]]

Explanation:
The row-traversing of nums is [1,2,3,4]. The new reshaped matrix is a 1 * 4 matrix, fill it row by row by using the previous list.
```

```
Input: 
nums = 
[[1,2],
 [3,4]]
r = 2, c = 4

Output: 
[[1,2],
 [3,4]]

Explanation:
There is no way to reshape a 2 * 2 matrix to a 2 * 4 matrix. So output the original matrix.
```

---
## Notes

* The height and width of the given matrix is in range $[1, 100]$.
* The given `r` and `c` are all positive.

---
## Solutions

1. Use queue store all elements in the matrix and reshape
    * Time complexity: $O(m \times n)$
    * Space complexity: $O(m \times n)$
2. Use division and modules to find out the number of columne and row in the reshaped matrix
    * Time complexity: $O(m \times n)$
    * Space complexity: $O(m \times n)$
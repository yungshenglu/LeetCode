# LC-766 - Toeplitz Matrix

A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same element.

Now given an $M \times N$ matrix, return `True` if and only if the matrix is Toeplitz.

> * Difficulty: **EASY**

---
## Examples

```
Input:
matrix = [
  [1,2,3,4],
  [5,1,2,3],
  [9,5,1,2]
]
Output: True
Explanation:
In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.
```

```
matrix = [
  [1,2],
  [2,2]
]
Output: False
Explanation:
The diagonal "[1, 2]" has different elements.
```

---
## Notes

1. matrix will be a 2D array of integers.
2. matrix will have a number of rows and columns in range $[1, 20]$.
3. `matrix[i][j]` will be integers in range $[0, 99]$.

---
## Follow Up

1. What if the matrix is stored on disk, and the memory is limited such that you can only load at most one row of the matrix into the memory at once?
2. What if the matrix is so large that you can only load up a partial row into the memory at once?

---
## Solutions

1. Compare each one with top-left element (brute)
    * Time complexity: $O(m \times n)$
    * Space complexity: $O(1)$
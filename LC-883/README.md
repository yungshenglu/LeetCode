# LC-883 - Projection Area of 3D Shapes

On a $N \times N$ grid, we place some $1 \times 1 \times 1$ cubes that are axis-aligned with the x, y, and z axes.

Each value `v = grid[i][j]` represents a tower of `v` cubes placed on top of grid cell `(i, j)`.

Now we view the projection of these cubes onto the xy, yz, and zx planes.

A projection is like a shadow, that maps our 3 dimensional figure to a 2 dimensional plane. 

Here, we are viewing the "shadow" when looking at the cubes from the top, the front, and the side.

Return the total area of all three projections.

> * Difficulty: **EASY**

---
## Examples

```
Input: [[2]]
Output: 5
```

```
Input: [[1,2],[3,4]]
Output: 17
Explanation:
Here are the three projections ("shadows") of the shape made with each axis-aligned plane.
```
![](https://s3-lc-upload.s3.amazonaws.com/uploads/2018/08/02/shadow.png)

```
Input: [[1,0],[0,2]]
Output: 8
```

```
Input: [[1,1,1],[1,0,1],[1,1,1]]
Output: 14
```

```
Input: [[2,2,2],[2,1,2],[2,2,2]]
Output: 21
```

---
## Notes

* $1 \le grid.length = grid[0].length \le 50$
* $0 \le grid[i][j] \le 50$

---
## Solutions

1. Mathematical Appraoch
    * Time complexity: $O(n^2)$
    * Space complexity: $O(1)$
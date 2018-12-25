# LC-119 - Pascal's Triangle II

Given a non-negative index $k$ where $k \le 33$, return the $k^{th}$ index row of the Pascal's triangle.

Note that the row index starts from 0.

![](https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif)

In Pascal's triangle, each number is the sum of the two numbers directly above it.

> * Difficulty: **EASY**

---
## Examples

```
Input: 3
Output: [1,3,3,1]
```

```
Input: 5
Output: [1,5,10,10,5,1]
```

---
## Solutions

1. Dynamic Programming
    * Time complexity: $O(n^2)$
    * Space complexity: $O(n^2)$
# LC-118 - Pascal's Triangle

Given a non-negative integer `numRows`, generate the first `numRows` of Pascal's triangle.

![](https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif)

In Pascal's triangle, each number is the sum of the two numbers directly above it.

> * Difficulty: **EASY**

---
## Examples

```
Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
```

---
## Solutions

1. Dynamic Programming
    * Time complexity: $O(n^2)$
    * Space complexity: $O(n^2)$
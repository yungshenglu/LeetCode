# LC-530 - Minimum Absolute Difference in BST

Given a binary search tree with non-negative values, find the minimum absolute difference between values of any two nodes.

> * Difficulty: **EASY**

---
## Examples

```
Input:

   1
    \
     3
    /
   2

Output: 1
Explanation:
The minimum absolute difference is 1, which is the difference between 2 and 1 (or between 2 and 3).
```

---
## Notes

* There are at least two nodes in this BST.

---
## Solutions

1. In-order Traversal
    * Time complexity: $O(n)$
    * Space complexity: $O(T)$
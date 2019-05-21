# LC-102 - Binary Tree Level Order Traversal

Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: [3,9,20,null,null,15,7]
    3
   / \
  9  20
    /  \
   15   7
Output:
[
  [3],
  [9,20],
  [15,7]
]
```

---
## Solutions

1. Breadth-First Search (BFS)
    * Time complexity: $O(T)$
    * Space complexity: $O(n^2)$
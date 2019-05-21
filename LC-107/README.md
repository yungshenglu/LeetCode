# LC-107 - Binary Tree Level Order Traversal II

Given a binary tree, return the *bottom-up* level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

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
  [15,7],
  [9,20],
  [3]
]
```

---
## Solutions

1. Breadth-First Search (BFS)
    * Time complexity: $O(T)$
    * Space complexity: $O(n^2)$
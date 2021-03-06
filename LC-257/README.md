# LC-257 - Binary Tree Paths

Given a binary tree, return all root-to-leaf paths.

> * Difficulty: **EASY**

---
## Examples

```
Input:
   1
 /   \
2     3
 \
  5

Output: ["1->2->5", "1->3"]
Explanation:
All root-to-leaf paths are: 1->2->5, 1->3
```

---
## Notes

* A leaf is a node with no children.

---
## Solutions

1. Depth-First Search (DFS)
    * Time complexity: $O(n)$
    * Space complexity: $O(T)$
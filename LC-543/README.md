# LC-543 - Diameter of Binary Tree

Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the **longest** path between any two nodes in a tree. This path may or may not pass through the root.

> * Difficulty: **EASY**

---
## Examples

```
Input:
          1
         / \
        2   3
       / \
      4   5
Output: 3
Explanation:
The length of the path [4,2,1,3] or [5,2,1,3].
```

---
## Notes

* The length of path between two nodes is represented by the number of edges between them.

---
## Solutions

1. Depth-First Search (DFS)
    * Time complexity: $O(n)$
    * Space complexity: $O(T)$
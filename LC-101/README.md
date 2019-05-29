# LC-101 - Symmetric Tree

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,2,2,3,4,4,3]
    1
   / \
  2   2
 / \ / \
3  4 4  3

Output: true
```

```
Input: [1,2,2,null,3,null,3]
    1
   / \
  2   2
   \   \
   3    3
Output: false
```

---
## Notes

* Bonus points if you could solve it both recursively and iteratively.

---
## Solutions

1. Iteration - BFS
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. Recursion
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
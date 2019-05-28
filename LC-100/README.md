# LC-100 - Same Tree

Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,2,3], [1,2,3]
    1         1
   / \       / \
  2   3     2   3
Output: true
```

```
Input: [1,2], [1,null,2]
    1         1
   /           \
  2             2
Output: false
```

```
Input: [1,2,1], [1,1,2]
    1         1
   / \       / \
  2   1     1   2
Output: false
```

---
## Solutions

1. Recursion
    * Time complexity: $O(n)$
    * Space complexity: $O(\log{n})$
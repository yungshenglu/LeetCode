# LC-669 - Trim a Binary Search Tree

Given a binary search tree and the lowest and highest boundaries as `L` and `R`, trim the tree so that all its elements lies in `[L, R]` (`R >= L`). You might need to change the root of the tree, so the result should return the new root of the trimmed binary search tree.

> * Difficulty: **EASY**

---
## Examples

```
Input: 
    1
   / \
  0   2

  L = 1
  R = 2

Output: 
    1
      \
       2
```

```
Input: 
    3
   / \
  0   4
   \
    2
   /
  1

  L = 1
  R = 3

Output: 
      3
     / 
   2   
  /
 1
```

---
## Solutions

1. Recursion
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
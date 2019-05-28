# LC-404 - Sum of Left Leaves

Find the sum of all left leaves in a given binary tree.

> * Difficulty: **EASY**

---
## Examples

```
Input:
    3
   / \
  9  20
    /  \
   15   7
Output: 24
Explanation:
There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
```

---
## Solutions

1. Pre-order Traversal
    * Time complexity: $O(n)$
    * Space complexity: $O(T)$
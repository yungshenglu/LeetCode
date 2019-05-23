# LC-653 - Two Sum IV - Input is a BST

Given a Binary Search Tree and a target number, return true if there exist two elements in the BST such that their sum is equal to the given target.

> * Difficulty: **EASY**

---
## Examples

```
Input:
    5
   / \
  3   6
 / \   \
2   4   7

Target = 9

Output: True
```

```
Input:
    5
   / \
  3   6
 / \   \
2   4   7

Target = 28

Output: False
```

---
## Solutions

1. Hash Set
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
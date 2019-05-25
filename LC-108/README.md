# LC-108 - Convert Sorted Array to Binary Search Tree

Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

> * Difficulty: **EASY**

---
## Examples

```
Input: [-10,-3,0,5,9],
Output:
One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:
      0
     / \
   -3   9
   /   /
 -10  5
```

---
## Solutions

1. Binary Search
    * Time complexity: $O(\log{n})$
    * Space complexity: $O(n)$
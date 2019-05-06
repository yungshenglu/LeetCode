# LC-700 - Search in a Binary Search Tree

Given the root node of a binary search tree (BST) and a value. You need to find the node in the BST that the node's value equals the given value. Return the subtree rooted with that node. If such node doesn't exist, you should return `NULL`.

> * Difficulty: **EASY**

---
## Examples

```
Input:
Given the tree:
        4
       / \
      2   7
     / \
    1   3
And the value to search: 2
Output:
      2
     / \
    1   3
```

```
Input:
Given the tree:
        4
       / \
      2   7
     / \
    1   3
And the value to search: 5
Output: NULL
```

---
## Notes

* An empty tree is represented by `NULL`, therefore you would see the expected output (serialized tree format) as `[]`, not `null`.

---
## Solutions

1. DFS in Iteration
    * Time complexity: $O(\log{n})$
    * Space complexity: $O(1)$
2. DFS in Recursion
    * Time complexity: $O(\log{n})$
    * Space complexity: $O(1)$
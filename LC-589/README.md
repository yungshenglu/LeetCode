# LC-589 - N-ary Tree Preorder Traversal

Given an n-ary tree, return the *preorder* traversal of its nodes' values.

> * Difficulty: **EASY**

---
## Examples

![](../res/img/LC-589.png)
```
Input:
{"$id":"1","children":[{"$id":"2","children":[{"$id":"5","children":[],"val":5},{"$id":"6","children":[],"val":6}],"val":3},{"$id":"3","children":[],"val":2},{"$id":"4","children":[],"val":4}],"val":1}
Output: [1, 3, 5, 6, 2, 4]
```

---
## Notes

* Recursive solution is trivial, could you do it iteratively?

---
## Solutions

1. DFS in Iteration
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. DFS in Recursion
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
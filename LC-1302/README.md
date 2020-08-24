# LC-1302 - Deepest Leaves Sum

Given a binary tree, return the sum of values of its deepest leaves.

> * Difficulty: **MEDIUM**

---
## Examples

![](../res/img/LC-1302.png)

```
Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15
```

---
## Notes

* The number of nodes in the tree is between `1` and `10^4`.
* The value of nodes is between `1` and `100`.

---
## Solutions

1. Depth-First Search (DFS)
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$

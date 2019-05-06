# LC-965 - Univalued Binary Tree

A binary tree is *univalued* if every node in the tree has the same value. Return `true` if and only if the given tree is univalued.

> * Difficulty: **EASY**

---
## Examples

![](../res/img/LC-965-1.png)
```
Input: [1,1,1,1,1,null,1]
Output: true
```

![](../res/img/LC-965-2.png)
```
Input: [2,2,2,5,2]
Output: false
```

---
## Notes

* The number of nodes in the given tree will be in the range `[1, 100]`.
* Each node's value will be an integer in the range `[0, 99]`.

---
## Solutions

1. Recursion
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
2. DFS
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
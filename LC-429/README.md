# LC-429 - N-ary Tree Level Order Traversal

Given an n-ary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example, given a `3-ary` tree:

![](../res/img/LC-429.png)

> * Difficulty: **EASY**

---
## Examples

```
Input:
{"$id":"1","children":[{"$id":"2","children":[{"$id":"5","children":[],"val":5},{"$id":"6","children":[],"val":6}],"val":3},{"$id":"3","children":[],"val":2},{"$id":"4","children":[],"val":4}],"val":1}
Output:
[
     [1],
     [3,2,4],
     [5,6]
]
```

![](../res/img/LC-429.png)

---
## Notes

* The depth of the tree is at most `1000`.
* The total number of nodes is at most `5000`.

---
## Solutions

1. Breadth-First Search (BFS)
    * Time complexity: $O(T)$
    * Space complexity: $O(n^2)$
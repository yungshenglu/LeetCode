# LC-437 - Path Sum III

You are given a binary tree in which each node contains an integer value.

Find the number of paths that sum to a given value.

The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).

The tree has no more than `1,000` nodes and the values are in the range `-1,000,000` to `1,000,000`.

> * Difficulty: **EASY**

---
## Examples

```
Input: [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8
      10
     /  \
    5   -3
   / \    \
  3   2   11
 / \   \
3  -2   1

Output: 3
Explanation: The paths that sum to 8 are
1.  5 -> 3
2.  5 -> 2 -> 1
3. -3 -> 11
```

```
Input: [1,-2,-3,1,3,-2,null,-1], sum = -1
      1
     / \
   -2   -3
   / \  /
  1  3 -2
 /
-1

Output: 4
```

---
## Solutions

1. Depth-First Search (DFS)
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
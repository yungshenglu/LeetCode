# LC-35 - Search Insert Position

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,3,5,6], 5
Output: 2
```

```
Input: [1,3,5,6], 2
Output: 1
```

```
Input: [1,3,5,6], 7
Output: 4
```

```
Input: [1,3,5,6], 0
Output: 0
```

```
Input: [1], 5
Output: 1
```

---
## Solutions

1. Binary Searching
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
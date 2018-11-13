# LC-268 - Missing Number

Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

> * Difficulty: **EASY**

---
## Exmaples

```
Input: [3, 0, 1]
Output: 2
```

```
Input: [9, 6, 4, 2, 3, 5, 7, 0, 1]
Output: 8
```

---
## Notes

Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?

---
## Solutions

1. Use XOR in bit operation to find out the missing bit
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
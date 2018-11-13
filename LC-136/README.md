# LC-136 - Single Number

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

> * Difficulty: **EASY**

---
## Examples

```
Input: [2, 2, 1]
Output: 1
```

```
Input: [4, 1, 2, 1, 2]
Output: 4
```

---
## Notes

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

---
## Solutions

1. Math method: $2 \times (a + b + c) - (a + a + b + b + c) = c$
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. Use XOR in bit operation to find out the different bit
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
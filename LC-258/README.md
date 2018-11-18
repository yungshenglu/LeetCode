# LC-258 - Add Digits

Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

> * Difficulty: **EASY**

---
## Examples

```
Input: 38

Output: 2

Explanation:
The process is like: 3 + 8 = 11, 1 + 1 = 2.
Since 2 has only one digit, return it.
```

---
## Follow Up

* Could you do it without any loop/recursion in $O(1)$ runtime?

---
## Solutions

1. Loop Method
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
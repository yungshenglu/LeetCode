# LC-9 - Palindrome Number

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

> * Difficulty: **EASY**

---
## Examples

```
Input: 121
Output: true
```

```
Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```

```
Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```

---
## Solutions

1. Revert Number
    * Time complexity: $O(\log_{10}{n})$
    * Space complexity: $O(1)$
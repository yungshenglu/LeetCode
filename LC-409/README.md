# LC-409 - Longest Palindrome

Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

This is case sensitive, for example "Aa" is not considered a palindrome here.

Assume the length of given string will not exceed 1,010.

> * Difficulty: **EASY**

---
## Examples

```
Input: "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
```

---
## Solutions

1. Greedy
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
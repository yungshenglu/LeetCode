# LC-516 - Longest Palindromic Subsequence

Given a string `s`, find the longest palindromic subsequence's length in `s`. You may assume that the maximum length of `s` is `1000`.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: "bbbab"
Output: 4
Explaination:
One possible longest palindromic subsequence is "bbbb".
```

```
Input: "cbbd"
Output: 2
Explaination:
One possible longest palindromic subsequence is "bb".
```

---
## Notes

* The input will be a non-empty word consisting of uppercase and lowercase latin letters.

---
## Solutions

1. LCS-like Method
    * Time complexity: $O(n^2)$
    * Space complexity: $O(n)$
2. Dynamic Programming
    * Time complexity: $O(n^2)$
    * Space complexity: $O(n)$
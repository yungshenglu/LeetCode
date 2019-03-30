# LC-459 - Repeated Substring Pattern

Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.

> * Difficulty: **EASY**

---
## Examples

```
Input: "abab"
Output: True
Explanation:
It's the substring "ab" twice.
```

```
Input: "aba"
Output: False
```

```
Input: "abcabcabcabc"
Output: True
Explanation:
It's the substring "abc" four times. (And the substring "abcabc" twice.)
```

---
## Solutions

1. Duplicate String
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
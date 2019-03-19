# LC-387 - First Unique Character in a String

Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

> * Difficulty: **EASY**

---
## Examples

```
Input: "leetcode"
Output: 0
```

```
Input:"loveleetcode"
Output: 2
```

---
## Notes

* You may assume the string contain only lowercase letters.

---
## Solutions

1. Two-pass Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
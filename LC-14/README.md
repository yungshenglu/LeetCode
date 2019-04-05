# LC-13 - Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

> * Difficulty: **EASY**

---
## Examples

```
Input: ["flower","flow","flight"]
Output: "fl"
```

```
Input: ["dog","racecar","car"]
Output: ""
Explanation:
There is no common prefix among the input strings.
```

```
Input: ["aa", "a"]
Output: "a"
```

---
## Notes

* All given inputs are in lowercase letters `a`-`z`.

---
## Solutions

1. Horizontal Scan
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
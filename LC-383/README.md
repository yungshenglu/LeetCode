# LC-383 - Ransom Note

Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

> * Difficulty: **EASY**


canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
---
## Examples

```
Input:
"a"
"b"
Output: false
```

```
Input:
"aa"
"ab"
Output: false
```

```
Input:
"aa"
"aab"
Output: true
```

```
Input:
"bd"
"ebcad"
Output: true
```

---
## Notes

* You may assume that both strings contain only lowercase letters.

---
## Solutions

1. Iteration
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
# LC-680 - Valid Palindrome II

Given a non-empty string `s`, you may delete **at most** one character. Judge whether you can make it a palindrome.

> * Difficulty: **EASY**

---
## Examples

```
Input: "aba"
Output: True
```

```
Input: "abca"
Output: True
Explanation:
You could delete the character 'c'.
```

```
Input: "deeee"
Output: False
```

```
Input: "eeccccbebaeeabebccceea"
Output: False
```

---
## Notes

* The string will only contain lowercase characters `a`-`z`. The maximum length of the string is 50000.

---
## Solutions

1. Two Pointer
    * Time complexity: $O(n^2)$
    * Space complexity: $O(1)$
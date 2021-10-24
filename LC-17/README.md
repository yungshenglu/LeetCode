# LC-17 - Letter Combinations of a Phone Number

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. Return the answer in **any order**.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

![](../res/img/LC-17.png)

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
```

```
Input: digits = ""
Output: []
```

```
Input: digits = "2"
Output: ["a","b","c"]
```

---
## Notes

- `0 <= digits.length <= 4`
- `digits[i]` is a digit in the range `['2', '9']`.

---
## Solutions

1. Recursion
  - Time complexity: $O(4^n)$
  - Space complexity: $O(n)$

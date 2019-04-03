# LC-20 - Valid Parentheses

Given a string containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.

> * Difficulty: **EASY**

---
## Examples

```
Input: "()"
Output: true
```

```
Input: "()[]{}"
Output: true
```

```
Input: "(]"
Output: false
```

```
Input: "([)]"
Output: false
```

```
Input: "{[]}"
Output: true
```

```
Input: ""
Output: true
```

```
Input: "["
Output: false
```

```
Input: "{[}"
Output: false
```

---
## Notes

* An empty string is also considered valid.

---
## Solutions

1. Using Stack
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
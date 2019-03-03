# LC-168 - Excel Sheet Column Title

Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:
```
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB
    ...
```

> * Difficulty: **EASY**

---
## Examples

```
Input: 1
Output: "A"
```

```
Input: 28
Output: "AB"
```

```
Input: 701
Output: "ZY"
```

---
## Solutions

1. Naive Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
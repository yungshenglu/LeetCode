# LC-171 - Excel Sheet Column Number

Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:
```
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28
    ...
```

> * Difficulty: **EASY**

---
## Examples

```
Input: "A"
Output: 1
```

```
Input: "AB"
Output: 28
```

```
Input: "ZY"
Output: 701
```

---
## Solutions

1. Naive Apporach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
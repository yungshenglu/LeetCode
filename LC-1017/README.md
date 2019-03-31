# LC-1017 - Convert to Base -2

Given a number `N`, return a string consisting of `"0"`s and `"1"`s that represents its value in base `-2` (negative two).

The returned string must have no leading zeroes, unless the string is `"0"`.

> * Difficulty: **EASY**

---
## Examples

```
Input: 2
Output: "110"
Explantion: (-2) ^ 2 + (-2) ^ 1 = 2
```

```
Input: 3
Output: "111"
Explantion: (-2) ^ 2 + (-2) ^ 1 + (-2) ^ 0 = 3
```

```
Input: 4
Output: "100"
Explantion: (-2) ^ 2 = 4
```

---
## Notes

* `0 <= N <= 10^9`

---
## Solutions

1. Bitwise Operation
    * Time complexity: $O(log(n))$
    * Space complexity: $O(1)$
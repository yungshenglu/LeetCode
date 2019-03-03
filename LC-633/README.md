# LC-633 - Sum of Square Numbers

Given a non-negative integer `c`, your task is to decide whether there're two integers `a` and `b` such that a^2 + b^2 = c.

> * Difficulty: **EASY**

---
## Examples

```
Input: 5
Output: True
Explanation:
1 * 1 + 2 * 2 = 5
```

```
Input: 3
Output: False
```

---
## Solutions

1. Sqrt Function
    * Time complexity: $O(\sqrt{c}\log{c})$
    * Space complexity: $O(1)$
2. Binary Search
    * Time complexity: $O(\sqrt{c}\log{c})$
    * Space complexity: $O(\log{c})$
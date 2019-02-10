# LC-415 - Add Strings

Given two non-negative integers `num1` and `num2` represented as string, return the sum of `num1` and `num2`.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: [3, 2, 1]
Output: 1
Explanation:
The third maximum is 1.
```

```
Input: [1, 2]
Output: 2
Explanation:
The third maximum does not exist, so the maximum (2) is returned instead.
```

```
Input: [2, 2, 3, 1]
Output: 1
Explanation:
Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.
```

---
## Notes

* The length of both `num1` and `num2` is < 5100.
* Both `num1` and `num2` contains only digits `0-9`.
* Both `num1` and `num2` does not contain any leading zero.
* You **must not use any built-in BigInteger library or convert the inputs to integer** directly.

---
## Solutions

1. Math Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
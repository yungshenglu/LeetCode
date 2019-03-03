# LC-400 - Nth Digit

Find the n-th digit of the infinite integer sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...

> * Difficulty: **EASY**

---
## Notes

* `n` is positive and will fit within the range of a 32-bit signed integer (`n < 2^31`).

---
## Examples

```
Input: 3
Output: 3
```

```
Input: 11
Output: 0
Explanation:
The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of the number 10.
```

```
Input: 1000000000
Output: 1
```

---
## Solutions

1. Naive Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
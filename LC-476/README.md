# LC-476 - Number Complement

Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

> * Difficulty: **EASY**

---
## Examples

```
Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
```

```
Input: 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
```

---
## Notes

* The given integer is guaranteed to fit within the range of a 32-bit signed integer.
* You could assume no leading zero bit in the integer’s binary representation.

---
## Solutions

1. Bit Manipulation
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
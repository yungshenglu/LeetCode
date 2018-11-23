# LC-693 - Binary Number with Alternating Bits

Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

> * Difficulty: **EASY**

---
## Examples

```
Input: 5
Output: True
Explanation:
The binary representation of 5 is: 101
```

```
Input: 7
Output: False
Explanation:
The binary representation of 7 is: 111.
```

```
Input: 11
Output: False
Explanation:
The binary representation of 11 is: 1011.
```

```
Input: 10
Output: True
Explanation:
The binary representation of 10 is: 1010.
```

---
## Solutions

1. Naive method using bit operation
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
2. Naive method using division and modules
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
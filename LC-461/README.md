# LC-461 - Hamming Distance

The [Hamming distance](https://en.wikipedia.org/wiki/Hamming_distance) between two integers is the number of positions at which the corresponding bits are different.

Given two integers `x` and `y`, calculate the Hamming distance.

> * Difficulty: **EASY**

---
## Examples

```
Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.
```

---
## Notes

* $0 \le x, y < 231$

---
## Solutions

1. Bit Manipulation Trick
    * Time complexity: $O(1)$
    * Space complexity: $O(1)$
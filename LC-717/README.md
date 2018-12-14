# LC-717 - 1-bit and 2-bit Characters

We have two special characters. The first character can be represented by one bit `0`. The second character can be represented by two bits (`10` or `11`).

Now given a string represented by several bits. Return whether the last character must be a one-bit character or not. The given string will always end with a zero.

> * Difficulty: **EASY**

---
## Examples

```
Input: bits = [1,0,0]
Output: True
Explanation:
The only way to decode it is two-bit character and one-bit character. So the last character is one-bit character.
```

```
Input: bits = [1,1,1,0]
Output: False
Explanation:
The only way to decode it is two-bit character and two-bit character. So the last character is NOT one-bit character.
```

---
## Notes

* `1 <= len(bits) <= 1000`
* `bits[i]` is always `0` or `1`

---
## Solutions

1. Increment Pointer
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
2. Greedy Apporach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
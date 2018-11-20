# LC-771 - Jewels and Stones

You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

> * Difficulty: **EASY**

---
## Examples

```
Input: J = "aA", S = "aAAbbbb"
Output: 3
```

```
Input: J = "z", S = "ZZ"
Output: 0
```

---
## Solutions

1. Naive Approach
    * Time complexity: $O(n \times m)$
    * Space complexity: $O(1)$
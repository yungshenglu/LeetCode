# LC-507 - Perfect Number

We define the **Perfect Number** is a **positive** integer that is equal to the sum of all its **positive** divisors except itself.

Now, given an **integer** `n`, write a function that returns true when it is a perfect number and false when it is not.

> * Difficulty: **EASY**

---
## Examples

```
Input: 28
Output: True
Explanation:
28 = 1 + 2 + 4 + 7 + 14
```

---
## Notes

* The input number `n` will not exceed 100,000,000. (1e8)

---
## Solutions

1. Math Approach
    * Time complexity: $O(\sqrt{n})$
    * Space complexity: $O(1)$
2. Euclid-Euler Theorem
    * Time complexity: $O(\log{n})$
    * Space complexity: $O(\log{1})$
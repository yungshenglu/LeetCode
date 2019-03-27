# LC-338 - Counting Bits

Given a non negative integer number `num`. For every numbers `i` in the range `0 <= i <= num` calculate the number of `1`'s in their binary representation and return them as an array.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: 2
Output: [0,1,1]
```

```
Input: 5
Output: [0,1,1,2,1,2]
```

---
## Follow Up

* It is very easy to come up with a solution with run time $O(n \times sizeof(integer))$. But can you do it in linear time $O(n)$ possibly in a single pass?
* Space complexity should be $O(n)$.
* Can you do it like a boss? Do it without using any builtin function like `__builtin_popcount` in C++ or in any other language.

---
## Solutions

1. Dynamic Programming
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
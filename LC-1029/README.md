# LC-1029 - Binary Prefix Divisible By 5

Given an array `A` of `0`s and `1`s, consider `N_i`: the `i`-th subarray from `A[0]` to `A[i]` interpreted as a binary number (from most-significant-bit to least-significant-bit.)

Return a list of booleans answer, where answer `[i]` is true if and only if `N_i` is divisible by `5`.

> * Difficulty: **EASY**

---
## Examples

```
Input: [0,1,1]
Output: [true,false,false]
Explanation:
The input numbers in binary are 0, 01, 011; which are 0, 1, and 3 in base-10.  Only the first number is divisible by 5, so answer[0] is true.
```

```
Input: [1,1,1]
Output: [false,false,false]
```

```
Input: [0,1,1,1,1,1]
Output: [true,false,false,false,true,false]
```

```
Input: [1,1,1,0,1]
Output: [false,false,false,false,false]
```

---
## Notes

* `1 <= A.length <= 30000`
* `A[i]` is `0` or `1`.

---
## Solutions

1. Iteration
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
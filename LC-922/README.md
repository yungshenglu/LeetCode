# LC-922 - Sort Array by Parity II

Given an array `A` of non-negative integers, half of the integers in `A` are odd, and half of the integers are even.

Sort the array so that whenever `A[i]` is odd, `i` is odd; and whenever `A[i]` is even, `i` is even.

You may return any answer array that satisfies this condition.

> * Difficulty: **EASY**

---
## Examples

```
Input: [4,2,5,7]
Output: [4,5,2,7]
Explanation:
[4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
```

---
## Notes

* `2 <= A.length <= 20000`
* `A.length % 2 == 0`
* `0 <= A[i] <= 1000`

---
## Solutions

1. Two-pass Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
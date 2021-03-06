# LC-905 - Sort Array by Parity

Given an array `A` of non-negative integers, return an array consisting of all the even elements of `A`, followed by all the odd elements of `A`.

You may return any answer array that satisfies this condition.

> * Difficulty: **EASY**

---
## Examples

```
Input: [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
```

---
## Notes

* `1 <= A.length <= 5000`
* `0 <= A[i] <= 5000`

---
## Solutions

1. Two-pass Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. In-place Approach with Quick sorting
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
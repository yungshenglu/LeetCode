# LC-238 - Product of Array Except Self

Given an array `nums` of `n` integers where `n > 1`,  return an array `output` such that `output[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input:  [1,2,3,4]
Output: [24,12,8,6]
```

```
Input:  []
Output: []
```

---
## Notes

* Please solve it without division and in $O(n)$.

---
## Follow Up

* Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)

---
## Solutions

1. Two-pass Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
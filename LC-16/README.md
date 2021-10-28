# LC-16 - 3 Sum Closest

Given an integer array `nums` of length `n` and an integer `target`, find three integers in `nums` such that the sum is closest to `target`.

Return the *sum* of the three integers.

You may assume that each input would have exactly one solution.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```

```
Input: nums = [0,0,0], target = 1
Output: 0
```

---
## Notes

- `3 <= nums.length <= 1000`
- `-1000 <= nums[i] <= 1000`
- `-10^4 <= target <= 10^4`

---
## Solutions

1. Two Pointers
    - Time complexity: $O(n^2)$
    - Space complexity: $O(1)$

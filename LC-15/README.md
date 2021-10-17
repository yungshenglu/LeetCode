# LC-15 - 3 Sum

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
```

```
Input: nums = []
Output: []
```

```
Input: nums = [0]
Output: []
```

---
## Notes

- `0 <= nums.length <= 3000`
- `-105 <= nums[i] <= 105`

---
## Solutions

1. Two Pointers
     - Time complexity:
     - Space complexity:
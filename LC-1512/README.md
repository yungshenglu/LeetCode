# LC-1512 - Number of Good Pairs

Given an array of integers `nums`.
A pair `(i,j)` is called good if `nums[i] == nums[j]` and `i < j`.
Return the number of *good* pairs.

> * Difficulty: **EASY**

---
## Examples

```
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation:
There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
```

```
Input: nums = [1,1,1,1]
Output: 6
Explanation:
Each pair in the array are good.
```

```
Input: nums = [1,2,3]
Output: 0
```

---
## Notes

* `1 <= nums.length <= 100`
* `1 <= nums[i] <= 100`

---
## Solutions

1. Use unordered-map
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$

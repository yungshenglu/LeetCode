# LC-1 - Two Sum

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: Because nums[0] + nums[1] = 2 + 7 = 9, return [0, 1].
```

---
## Solutions

1. Brute Force
    * Time complexity: $O(n^2)$
    * Space complexity: $O(1)$
2. Two-pass Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
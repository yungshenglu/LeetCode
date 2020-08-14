# LC-1480 - Running Sum of 1d Array

Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.

Return the running sum of `nums`.

---
## Examples

```
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation:
Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
```

```
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: 
Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
```

```
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
```

---
## Notes

* `1 <= nums.length <= 1000`
* `-10^6 <= nums[i] <= 10^6`

---
## Solutions

1. Naive Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$

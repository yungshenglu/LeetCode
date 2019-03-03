# LC-643 - Maximum Average Subarray I

Given an array consisting of `n` integers, find the contiguous subarray of given length `k` that has the maximum average value. And you need to output the maximum average value.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,12,-5,-6,50,3], k = 4
Output: 12.75
Explanation:
Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
```

---
## Notes

* $1 \le k \le n \le 30,000$.
* Elements of the given array will be in the range [-10,000, 10,000].

---
## Solutions

1. Cumulative Sum
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. Sliding Window
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
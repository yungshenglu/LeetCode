# LC-674 - Longest Continuous Increasing Subsequence

Given an unsorted array of integers, find the length of longest continuous increasing subsequence (subarray).

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,3,5,4,7]
Output: 3
Explanation:
The longest continuous increasing subsequence is [1,3,5], its length is 3. 
Even though [1,3,5,7] is also an increasing subsequence, it's not a continuous one where 5 and 7 are separated by 4.
```

```
Input: [2,2,2,2,2]
Output: 1
Explanation:
The longest continuous increasing subsequence is [2], its length is 1.
```

```
Input: [1]
Output: 1
```

---
## Notes

* Length of the array will not exceed `10000`.

---
## Solutions

1. Sliding Window
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
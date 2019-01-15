# LC-581 - Shortest Unsorted Continuous Subarray

Given an integer array, you need to find one **continuous subarray** that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order, too.

You need to find the shortest such subarray and output its length.

> * Difficulty: **EASY**

---
## Examples

```
Input: [2, 6, 4, 8, 10, 9, 15]
Output: 5
Explanation:
You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
```

---
## Notes

* Then length of the input array is in range `[1, 10,000]`.
* The input array may contain duplicates, so ascending order here means `<=`.

---
## Solutions

1. Compare with Sorting Array
    * Time complexity: $O(n\log{n})$
    * Space complexity: $O(1)$
2. Using Stack
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
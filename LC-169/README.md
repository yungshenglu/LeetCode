# LC-169 - Majority Element

Given an array of size `n`, find the majority element. The majority element is the element that appears more than `⌊ n/2 ⌋` times.

You may assume that the array is non-empty and the majority element always exist in the array.

> * Difficulty: **EASY**

---
## Examples

```
Input: [3,2,3]
Output: 3
```

```
Input: [2,2,1,1,1,2,2]
Output: 2
```

---
## Solutions

1. Brute Approach
    * Time complexity: $O(n^2)$
    * Space complexity: $O(1)$
2. Sorting
    * Time complexity: $O(n\log{n})$
    * Space complexity: $O(1)$
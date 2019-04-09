# LC-229 - Majority Element II

Given an integer array of size `n`, find all elements that appear more than `⌊ n/3 ⌋` times.

> * Difficulty: **EASY**

---
## Exmaples

```
Input: [3,2,3]
Output: [3]
```

```
Input: [1,1,1,3,3,2,2,2]
Output: [1,2]
```

---
## Notes

* The algorithm should run in linear time and in $O(1)$ space.

---
## Solutions

1. Boyer-Moore Majority Vote
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
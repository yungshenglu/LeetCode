# LC-442 - Find All Duplicates in an Array

Given an array of integers, `1 <= a[i] <= n` (`n = size of array`), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: [4,3,2,7,8,2,3,1]
Output: [2,3]
```

---
## Follow Up

* Could you do it without extra space and in O(n) runtime?

---
## Solutions

1. Hash Table
    * Time complexity: $O(n)$
    * Space complexity: $O(n + n)$
2. Sorting
    * Time complexity: $O(n\log{n})$
    * Space complexity: $O(n)$
3. Rearrange
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
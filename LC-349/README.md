# LC-349 - Intersection of Two Arrays

Given two arrays, write a function to compute their intersection.

> * Difficulty: **EASY**

---
## Examples

```
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
```

```
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
```

---
## Notes

* Each element in the result must be unique.
* The result can be in any order.

---
## Solutions

1. Use `std::set_intersection`
    * Time complexity: $O(n\log{n})$
    * Space complexity: $O(n)$
2. Hash table
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
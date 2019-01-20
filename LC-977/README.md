# LC-977 - Squares of a Sorted Array

Given an array of integers `A` sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

If it is impossible to form any triangle of non-zero area, return `0`.

> * Difficulty: **EASY**

---
## Examples

```
Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]
```

```
Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]
```

---
## Notes

* `1 <= A.length <= 10000`
* `-10000 <= A[i] <= 10000`
* `A` is sorted in non-decreasing order.

---
## Solutions

1. Absolute Value and Sorting
    * Time complexity: $O(n\log{n})$
    * Space complexity: $O(1)$
# LC-976 - Largest Perimeter Triangle

Given an array `A` of positive lengths, return the largest perimeter of a triangle with **non-zero area**, formed from `3` of these lengths.

If it is impossible to form any triangle of non-zero area, return `0`.

> * Difficulty: **EASY**

---
## Examples

```
Input: [2,1,2]
Output: 5
```

```
Input: [1,2,1]
Output: 0
```

```
Input: [3,2,3,4]
Output: 10
```

```
Input: [3,6,2,3]
Output: 8
```

```
Input: [1,1,5,2,3]
Output: 0
```

---
## Notes

* `3 <= A.length <= 10000`
* `1 <= A[i] <= 10^6`

---
## Solutions

1. Sorting
    * Time complexity: $O(n\log{n})$
    * Space complexity: $O(1)$
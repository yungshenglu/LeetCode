# LC-961 - N-Repeated Element in Size 2N Array

In a array `A` of size `2N`, there are `N + 1` unique elements, and exactly one of these elements is repeated `N` times.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,2,3,3]
Output: 3
```

```
Input: [2,1,2,5,3,2]
Output: 2
```

```
Input: [5,1,5,2,5,3,5,4]
Output: 5
```

---
## Notes

* `4 <= A.length <= 10000`
* `0 <= A[i] < 10000`
* `A.length` is even

---
## Solutions

1. Sorting
    * Time complexity: $O(n\log{n})$
    * Space complexity: $O(1)$
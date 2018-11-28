# LC-896 - Monotonic Array

An array is monotonic if it is either monotone increasing or monotone decreasing.

An array `A` is monotone increasing if for all $i \le j$, $A[i] \le A[j]$. An array `A` is monotone decreasing if for all $i \le j$, $A[i] \ge A[j]$.

Return true if and only if the given array `A` is monotonic.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,2,2,3]
Output: true
```

```
Input: [6,5,4,4]
Output: true
```

```
Input: [1,3,2]
Output: false
```

```
Input: [1,2,4,5]
Output: true
```

```
Input: [1,1,1]
Output: true
```

---
## Notes

* $1 \le A.length \le 50000$
* $-100000 \le A[i] \le 100000$

---
## Solutions

1. Two-pass Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
2. One-pass Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
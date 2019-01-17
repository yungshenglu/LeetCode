# LC-414 - Third Maximum Number

Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number. The time complexity must be in $O(n)$.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: [3, 2, 1]
Output: 1
Explanation:
The third maximum is 1.
```

```
Input: [1, 2]
Output: 2
Explanation:
The third maximum does not exist, so the maximum (2) is returned instead.
```

```
Input: [2, 2, 3, 1]
Output: 1
Explanation:
Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.
```

---
## Follow Up

* Could you do it without extra space and in O(n) runtime?

---
## Solutions

1. Brute Force
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
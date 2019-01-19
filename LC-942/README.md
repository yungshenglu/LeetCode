# LC-942 - DI String Match

Given a string `S` that only contains `"I"` (increase) or `"D"` (decrease), let `N = S.length`.

Return any permutation `A` of `[0, 1, ..., N]` such that for all `i = 0, ..., N-1`:
* If `S[i] == "I"`, then `A[i] < A[i+1]`
* If `S[i] == "D"`, then `A[i] > A[i+1]`

> * Difficulty: **EASY**

---
## Examples

```
Input: "IDID"
Output: [0,4,1,3,2]
```

```
Input: "III"
Output: [0,1,2,3]
```

```
Input: "DDI"
Output: [3,2,0,1]
```

---
## Notes

* `1 <= S.length <= 10000`
* `S` only contains characters `"I"` or `"D"`.

---
## Solutions

1. Ad Hoc
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
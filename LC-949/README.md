# LC-949 - Largest Time for Given Digits

Given an array of 4 digits, return the largest 24 hour time that can be made.

The smallest 24 hour time is `00:00`, and the largest is `23:59`.  Starting from `00:00`, a time is larger if more time has elapsed since midnight.

Return the answer as a string of length 5.  If no valid time can be made, return an empty string.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,2,3,4]
Output: "23:41"
```

```
Input: [5,5,5,5]
Output: ""
```

```
Input: [0,0,0,0]
Output: "00:00"
```

---
## Notes

* `A.length == 4`
* `0 <= A[i] <= 9`


---
## Solutions

1. Brute Force
    * Time complexity: $O(1)$
    * Space complexity: $O(1)$
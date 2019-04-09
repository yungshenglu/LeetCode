# LC-796 - Rotate String

We are given two strings, `A` and `B`.

A shift on `A` consists of taking string `A` and moving the leftmost character to the rightmost position. For example, if `A = 'abcde'`, then it will be `'bcdea'` after one shift on `A`. Return `True` if and only if `A` can become `B` after some number of shifts on `A`.

> * Difficulty: **EASY**

---
## Examples

```
Input: A = 'abcde', B = 'cdeab'
Output: true
```

```
Input: A = 'abcde', B = 'abced'
Output: false
```

---
## Notes

* `A` and `B` will have length at most `100`.

---
## Solutions

1. Simple Check
    * Time complexity: $O(n^2)$
    * Space complexity: $O(n)$
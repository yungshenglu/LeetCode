# LC-1221 - Split a String in Balanced Strings

Balanced strings are those who have equal quantity of `'L'` and `'R'` characters.

Given a balanced string `s` split it in the maximum amount of balanced strings.

Return the maximum amount of splitted balanced strings.

---
## Examples

```
Input: s = "RLRRLLRLRL"
Output: 4
Explanation:
s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
```

```
Input: s = "RLLLLRRRLR"
Output: 3
Explanation:
s can be split into "RL", "LLLRRR", "LR", each substring contains same number of 'L' and 'R'.
```

```
Input: s = "LLLLRRRR"
Output: 1
Explanation:
s can be split into "LLLLRRRR".
```

```
Input: s = "RLRRRLLRLL"
Output: 2
Explanation:
s can be split into "RL", "RRRLLRLL", since each substring contains an equal number of 'L' and 'R'.
```

---
## Notes

* `1 <= s.length <= 1000`
* `s[i] = 'L' or 'R'`

---
## Solutions

1. Naive Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$

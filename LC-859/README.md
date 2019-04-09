# LC-859 - Buddy Strings

Given two strings `A` and `B` of lowercase letters, return `true` if and only if we can swap two letters in `A` so that the result equals `B`.

> * Difficulty: **EASY**

---
## Examples

```
Input: A = "ab", B = "ba"
Output: true
```

```
Input: A = "ab", B = "ab"
Output: false
```

```
Input: A = "aa", B = "aa"
Output: true
```

```
Input: A = "aaaaaaabc", B = "aaaaaaacb"
Output: true
```

```
Input: A = "", B = "aa"
Output: false
```

---
## Notes

* `0 <= A.length <= 20000`
* `0 <= B.length <= 20000`
* `A` and `B` consist only of lowercase letters.

---
## Solutions

1. Naive Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
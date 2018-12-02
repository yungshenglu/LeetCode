# LC-448 - Find All Numbers Disappeared in an Array

Given an array of integers where $1 \le a[i] \le n$ ($n =$ size of array), some elements appear twice and others appear once.

Find all the elements of $[1, n]$ inclusive that do not appear in this array.

> * Difficulty: **EASY**

---
## Examples

```
Input: [4,3,2,7,8,2,3,1]
Output: [5,6]
```

```
Input: [1,1]
Output: [2]
```

---
## Follow Up

* Could you do it without extra space and in $O(n)$ runtime? You may assume the returned list does not count as extra space.

---
## Solutions

1. Flip Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
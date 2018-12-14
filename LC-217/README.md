# LC-217 - Contains Duplicate

Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

> * Difficulty: **EASY**

---
## Exmaples

```
Input: [1,2,3,1]
Output: true
```

```
Input: [1,2,3,4]
Output: false
```

```
Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
```

```
Input: [1,-5,4,2,-3]
Output: false
```

---
## Solutions

1. Hash Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. Sorting
    * Time complexity: $O(n\log{n})$
    * Space complexity: $O(1)$
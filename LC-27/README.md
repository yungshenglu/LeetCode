# LC-27 - Remove Element

Given an array nums and a value val, remove all instances of that value [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) and return the new length.

Do not allocate extra space for another array, you must do this by **modifying the input array** [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) with $O(1)$ extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

> * Difficulty: **EASY**

---
## Examples

```
Input: nums = [3,2,2,3], val = 3,
Output: 2
Explaination:
Your function should return length = 2, with the first two elements of nums being 2. It doesn't matter what you leave beyond the returned length.
```

```
Input: nums = [0,1,2,2,3,0,4,2], val = 2,
Output: 5
Explaination:
Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4. Note that the order of those five elements can be arbitrary. It doesn't matter what values are set beyond the returned length.
```

---
## Solutions

1. Two Pointers
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
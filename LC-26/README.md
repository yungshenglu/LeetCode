# LC-26 - Remove Duplicates from Sorted Array

Given a sorted array `nums`, remove the duplicates [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by **modifying the input array** [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) with $O(1)$ extra memory.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,1,2]
Output: 2
Explaination:
Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
It doesn't matter what you leave beyond the returned length.
```

```
Input: [0,0,1,1,1,2,2,3,3,4]
Output: 5
Explaination:
Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.
It doesn't matter what values are set beyond the returned length.
```

---
## Clarification

Confused why the returned value is an integer but your answer is an array?
Note that the input array is passed in by **reference**, which means modification to the input array will be known to the caller as well.
Internally you can think of this:

```cpp
// nums is passed in by reference (i.e., without making a copy)
int len = removeDuplicates(nums);
// Any modification to nums in your function would be known by the caller
// Use the length returned by your function, it prints the first len elements
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
```

---
## Solutions

1. Two Pointers
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
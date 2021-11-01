# LC-1207 - Unique Number of Occurrences

Given an array of integers `arr`, write a function that returns `true` if and only if the number of occurrences of each value in the array is unique.

> * Difficulty: **EASY**

---
## Examples

```
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation:
The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
```

```
Input: arr = [1,2]
Output: false
```

```
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
```

---
## Notes

* `1 <= arr.length <= 1000`
* `-1000 <= arr[i] <= 1000`

---
## Solutions

* Use Hash Table and Set
    * Time complexity: O(n)
        `The first for loop has O(n) time complexity. In the worst case, map 'occur' has n elements, thus, total time complexity = O(n) + O(n) = O(n)`
    * Space complexity: O(n)
        `Extra space required for map and set in worst case would contain all the elements i.e. O(n)`

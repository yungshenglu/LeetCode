# LC-628 - Maximum Product of Three Numbers

Given an integer array, find three numbers whose product is maximum and output the maximum product.

> * Difficulty: **EASY**

---
## Examples

```
Input: [1,2,3]
Output: 6
```

```
Input: [1,2,3,4]
Output: 24
```

```
Input: [-4,-3,-2,-1,60]
Output: 720
```

---
## Notes

* The length of the given array will be in range $[3, 10^4]$ and all elements are in the range $[-1000, 1000]$.
* Multiplication of any three numbers in the input won't exceed the range of 32-bit signed integer.

---
## Solutions

1. Sorting
    * Time complexity: $O(n \log{n})$
    * Space complexity: $O(\log{n})$
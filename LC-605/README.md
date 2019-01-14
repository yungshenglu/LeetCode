# LC-605 - Can Place Flowers

Suppose you have a long flowerbed in which some of the plots are planted and some are not. However, flowers cannot be planted in adjacent plots - they would compete for water and both would die.

Given a flowerbed (represented as an array containing `0` and `1`, where `0` means empty and `1` means not empty), and a number `n`, return if `n` new flowers can be planted in it without violating the no-adjacent-flowers rule.

> * Difficulty: **EASY**

---
## Examples

```
Input: flowerbed = [1,0,0,0,1], n = 1
Output: True
```

```
Input: flowerbed = [1,0,0,0,1], n = 2
Output: False
```

```
Input: flowerbed = [0,0,1,0,0], n = 1
Output: True
```

---
## Notes

* The input array won't violate no-adjacent-flowers rule.
* The input array size is in the range of `[1, 20000]`.
* `n` is a non-negative integer which won't exceed the input array size.

---
## Solutions

1. One-Pass Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
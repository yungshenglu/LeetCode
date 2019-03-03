# LC-441 - Arranging Coins

You have a total of `n` coins that you want to form in a staircase shape, where every `k`-th row must have exactly `k` coins.

Given `n`, find the total number of **full** staircase rows that can be formed.

`n` is a non-negative integer and fits within the range of a 32-bit signed integer.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: n = 5
Output: 2
Explaination:
The coins can form the following rows:
¤
¤ ¤
¤ ¤
Because the 3rd row is incomplete, we return 2.
```

```
Input: n = 8
Output: 2
Explaination:
The coins can form the following rows:
¤
¤ ¤
¤ ¤ ¤
¤ ¤
Because the 4th row is incomplete, we return 3.
```

---
## Solutions

1. Naive Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
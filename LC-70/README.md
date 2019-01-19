# LC-70 - Climbing Stairs

You are climbing a stair case. It takes `n` steps to reach to the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

> * Difficulty: **EASY**

---
## Examples

```
Input: 2
Output: 2
Explanation:
There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
```

```
Input: 3
Output: 3
Explanation:
There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
```

---
## Notes

* Given `n` will be a positive integer.

---
## Solutions

1. Dynamic Programming
   * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. Fibonacci Number
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
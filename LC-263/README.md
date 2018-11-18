# LC-263 - Ugly Number

Write a program to check whether a given number is an ugly number.

Ugly numbers are **positive numbers** whose prime factors only include 2, 3, 5.

> * Difficulty: **EASY**

---
## Exmaples

```
Input: 6
Output: true
Explanation: 6 = 2 × 3
```

```
Input: 8
Output: true
Explanation: 6 = 2 × 2 × 2
```

```
Input: 14
Output: false 
Explanation: 14 is not ugly since it includes another prime factor 7.
```

```
Input: 25
Output: true
Explanation: 25 = 5 × 5
```

```
Input: -2
Output: false
Explanation: -2 is not ugly since it must be positive
```

---
## Solutions

1. Use iteraitve way to check whether it can be divided by 2, 3, and 5
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
# LC-2 - Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation:
342 + 465 = 807.
```

```
Input: (5) + (5)
Output: 0 -> 1
Explanation:
5 + 5 = 10.
```

```
Input: (1 -> 8) + (0)
Output: 1 -> 8
Explanation:
18 + 0 = 18.
```

---
## Solutions

1. Elementary Math
    * Time complexity: $O(\max{(m, n)})$
    * Space complexity: $O(\max{(m, n)})$
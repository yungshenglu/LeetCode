# LC-19 - Remove Nth Node From End of List

Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.

> * Difficulty: **MEDIUM**

---
## Examples

![](../res/img/LC-19.jpg)

```
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
```

```
Input: head = [1], n = 1
Output: []
```

```
Input: head = [1,2], n = 1
Output: [1]
```

---
## Notes

- The number of nodes in the list is `sz`.
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`

---
## Follow up

- Could you do this in one pass?

---
## Solutions

1. Recursion
    - Time complexity: $O(n\log{n})$
    - Space complexity: $O(n)$

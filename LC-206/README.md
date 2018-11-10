# LC-206 - Reverse Linked List

Reverse a singly linked list.

> * Difficulty: **EASY**

---
## Exmaples

```
Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
```

---
## Follow Up

A linked list can be reversed either iteratively or recursively. Could you implement both?

---
## Solutions

1. Use iteraitve way to add the node in front of the reversed list
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
2. Use recursive way to reverse each node in the linked list
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
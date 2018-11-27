# LC-237 - Delete Node in a Linked List

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Given linked list - `head = [4,5,1,9]`, which looks like following:
```
4 -> 5 -> 1 -> 9
```

> * Difficulty: **EASY**

---
## Examples

```
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation:
You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function. Since 2 has only one digit, return it.
```

```
Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
Explanation:
You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.
```

---
## Notes

* The linked list will have at least two elements.
* All of the nodes' values will be unique.
* The given node will not be the tail and it will always be a valid node of the linked list.
* Do not return anything from your function.

---
## Solutions

1. Naive Approach
    * Time complexity: $O(1)$
    * Space complexity: $O(1)$
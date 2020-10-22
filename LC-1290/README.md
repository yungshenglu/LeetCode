# LC-1290 - Convert Binary Number in a Linked List to Integer

Given `head` which is a reference node to a singly-linked list. The value of each node in the linked list is either `0` or `1`. The linked list holds the binary representation of a number.

Return the *decimal* value of the number in the linked list.

> * Difficulty: **EASY**

---
## Examples

```
Input: head = [1,0,1]
Output: 5
Explanation:
(101) in base 2 = (5) in base 10
```

```
Input: head = [0]
Output: 0
```

```
Input: head = [1]
Output: 1
```

```
Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
Output: 18880
```

```
Input: head = [0,0]
Output: 0
```

---
## Notes

* The Linked List is not empty.
* Number of nodes will not exceed 30.
* Each node's value is either `0` or `1`.

---
## Solutions

1. Arithmetic Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
2. Bitwise Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$

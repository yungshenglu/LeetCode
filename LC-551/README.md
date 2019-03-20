# LC-551 - Student Attendance Record I

You are given a string representing an attendance record for a student. The record only contains the following three characters:
* `'A'` : Absent.
* `'L'` : Late.
* `'P'` : Present.

A student could be rewarded if his attendance record doesn't contain **more than one `'A'` (absent)** or **more than two continuous `'L'` (late)**.

You need to return whether the student could be rewarded according to his attendance record.

> * Difficulty: **EASY**

---
## Examples

```
Input: "PPALLP"
Output: True
```

```
Input: "PPALLL"
Output: False
```

```
Input: "LALL"
Output: True
```

```
Input: "LLPPLPPLPLPPLPLPLPPAPPPPPLPALL"
Output: False
```

---
## Solutions

1. Naive Approach
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
# LC-1108 - Defanging an IP Address

Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period `"."` with `"[.]"`.

> * Difficulty: **EASY**

---
## Examples

```
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
```

```
Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
```

---
## Notes

* The given address is a valid IPv4 address.

---
## Solutions

1. String Replace
    * Time complexity: $O(N)$
    * Space complexity: $O(N)$
# LC-434 - Number of Segments in a String

Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.

Please note that the string does not contain any **non-printable** characters.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: "Hello, my name is John"
Output: 5
```

```
Input: ", , , ,        a, eaefa"
Output: 6
```

```
Input: "                "
Output: 0
```

```
Input: "a, b, c"
Output: 3
```

```
Input: "a"
Output: 1
```

---
## Solutions

1. In-place
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
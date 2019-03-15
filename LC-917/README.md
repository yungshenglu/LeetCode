# LC-917 - Reverse Only Letters

Given a string `S`, return the "reversed" string where all characters that are not a letter stay in the same place, and all letters reverse their positions.

> * Difficulty: **EASY**

---
## Examples

```
Input: "ab-cd"
Output: "dc-ba"
```

```
Input: "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
```

```
Input: "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
```

---
## Notes

* `S.length <= 100`
* `33 <= S[i].ASCIIcode <= 122`
* `S` doesn't contain `\` or `"`

---
## Solutions

1. Stack
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
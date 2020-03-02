# LC-925 - Long Pressed Name

Your friend is typing his name into a keyboard.  Sometimes, when typing a character c, the key might get long pressed, and the character will be typed 1 or more times.

You examine the typed characters of the keyboard.  Return True if it is possible that it was your friends name, with some characters (possibly none) being long pressed.

> * Difficulty: **EASY**

---
## Examples

```
Input: name = "alex", typed = "aaleex"
Output: true
Explanation:
'a' and 'e' in 'alex' were long pressed.
```

```
Input: name = "saeed", typed = "ssaaedd"
Output: false
Explanation:
'e' must have been pressed twice, but it wasn't in the typed output.
```

```
Input: name = "leelee", typed = "lleeelee"
Output: true
```

```
Input: name = "laiden", typed = "laiden"
Output: true
Explanation:
It's not necessary to long press any character.
```

```
Input: name = "kikcxmvzi", typed = "kiikcxxmmvvzz"
Output: false
```

---
## Notes

* `name.length <= 1000`
* `typed.length <= 1000`
* The characters of name and typed are lowercase letters.

---
## Solutions

1. Two Pointer
    * Time complexity: $O(n)$
    * Space complexity: $O(1)$
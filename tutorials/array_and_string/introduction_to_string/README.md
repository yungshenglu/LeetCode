# Introduction to String - Exercises

1. Add Binary
2. Implement strStr()
3. Longest Common Prefix

---
## 1. Add Binary

Given two binary strings, return their sum (also a binary string). The input strings are both non-empty and contains only characters `1` or `0`.

### Examples

```
Input: a = "11", b = "1"
Output: "100"
```

```
Input: a = "1010", b = "1011"
Output: "10101"
```

---
## 2. Implement strStr()

Implement [strStr()](http://www.cplusplus.com/reference/cstring/strstr/). Return the index of the first occurrence of needle in haystack, or **-1** if needle is not part of haystack.

### Examples

```
Input: haystack = "hello", needle = "ll"
Output: 2
```

```
Input: haystack = "aaaaa", needle = "bba"
Output: -1
```

### Clarification

* What should we return when `needle` is an empty string? This is a great question to ask during an interview.
* For the purpose of this problem, we will return 0 when `needle` is an empty string. This is consistent to C's `strstr()` and Java's `indexOf()`.

---
## 3. Longest Common Prefi

Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string `""`.

### Examples

```
Input: ["flower","flow","flight"]
Output: "fl"
```

```
Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```

### Notes

* All given inputs are in lowercase letters `a-z`.
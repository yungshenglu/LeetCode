# LC-3 - Longest Substring Without Repeating Characters

Given a string, find the length of the longest substring without repeating characters.

> * Difficulty: **MEDIUM**

---
## Examples

```
Input: "abcabcbb"
Output: 3 
Explanation: 
The answer is "abc", with the length of 3. 
```

```
Input: "bbbbb"
Output: 1
Explanation: 
The answer is "b", with the length of 1.
```

```
Input: "pwwkew"
Output: 3
Explanation: 
The answer is "wke", with the length of 3. 
Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

```
Input: ""
Output: 0
```

```
Input: " "
Output: 1
```

```
Input: "siljapsqtvuilycxcajbdtxokfqzhwfbfslhhfxabtlmspkuptyuoxiacyzjxhlezylhdkj"
Output: 14
```

---
## Solutions

1. Brute Force (Time Limit Exceeded)
    * Time complexity: $O(n^3)$
    * Space complexity: $O(\min{(n, m)})$
2. Sliding Window
    * Time complexity: $O(n)$
    * Space complexity: $O(\min{(n, m)})$
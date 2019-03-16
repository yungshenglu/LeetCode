# LC-606 - Construct String from Binary Tree

You need to construct a string consists of parenthesis and integers from a binary tree with the preorder traversing way.

The null node needs to be represented by empty parenthesis pair `"()"`. And you need to omit all the empty parenthesis pairs that don't affect the one-to-one mapping relationship between the string and the original binary tree.

> * Difficulty: **EASY**

---
## Examples

```
Input: Binary tree: [1,2,3,4]
       1
     /   \
    2     3
   /
  4
Output: "1(2(4))(3)"
Explanation:
Originallay it needs to be "1(2(4)())(3()())",
but you need to omit all the unnecessary empty parenthesis pairs.
And it will be "1(2(4))(3)".
```

```
Input: Binary tree: [1,2,3,null,4]
       1
     /   \
    2     3
     \  
      4
Output: "1(2()(4))(3)"
Explanation:
Almost the same as the first example,
except we can't omit the first parenthesis pair to break the one-to-one mapping relationship between the input and the output.
```

---
## Solutions

1. Recursion
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. Using Stack
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
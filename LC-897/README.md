# LC-897 - Increasing Order Search Tree

Given a tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only 1 right child.

> * Difficulty: **EASY**

---
## Examples

```
Input: [5,3,6,2,4,null,8,1,null,null,null,7,9]
       5
      / \
    3    6
   / \    \
  2   4    8
 /        / \ 
1        7   9
Output: [1,null,2,null,3,null,4,null,5,null,6,null,7,null,8,null,9]
     1
      \
       2
        \
         3
          \
           4
            \
             5
              \
               6
                \
                 7
                  \
                   8
                    \
                     9  
```

---
## Notes

* The number of nodes in the given tree will be between 1 and 100.
* Each node will have a unique integer value from 0 to 1000.

---
## Solutions

1. Inorder Traversal
    * Time complexity: $O(n)$
    * Space complexity: $O(n)$
2. Inorder Traversal with Relinking
    * Time complexity: $O(n)$
    * Space complexity: $O(h)$
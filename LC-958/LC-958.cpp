#include <iostream>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    /**
     * Concepts: Traversal in Iteration
     */
    bool isCompleteTree(TreeNode* root) {
        int count = countNodes(root);
        return findChildNodes(root, 0, count);
    }
    
    bool findChildNodes(TreeNode* root, int index, int count) {
        if (root == NULL) 
            return true; 
        if (index >= count)
            return false;
        return (findChildNodes(root->left, 2 * index + 1, count) && findChildNodes(root->right, 2 * index + 2, count)); 
    }
    
private: 
    unsigned int countNodes(TreeNode* root) { 
        if (root == NULL) 
            return 0; 
        return (1 + countNodes(root->left) + countNodes(root->right)); 
    }
};
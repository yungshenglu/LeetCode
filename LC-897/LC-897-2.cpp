#include <string>
#include <vector>

using namespace std;

/**
 * Definition for singly-linked list.
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
     * Concepts: Inorder Traversal with Relinking
     */
    TreeNode* increasingBST(TreeNode* root) {
        if (!root)
            return NULL;
        
        TreeNode* newRoot = new TreeNode(0);
        TreeNode* curr = newRoot;
        inorder(root, curr);
        return newRoot->right;
    }
    
    void inorder(TreeNode* node, TreeNode*& curr) {
        if (!node)
            return;
        
        inorder(node->left, curr);
        node->left = NULL;
        curr->right = node;
        curr = node;
        inorder(node->right, curr);
    }
};
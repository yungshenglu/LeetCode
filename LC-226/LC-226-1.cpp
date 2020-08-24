#include <string>

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
     * Concepts: Recursion
     */
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return NULL;
        
        TreeNode* right = invertTree(root->left);
        TreeNode* left = invertTree(root->right);
        root->left = left;
        root->right = right;
        return root;
    }
};
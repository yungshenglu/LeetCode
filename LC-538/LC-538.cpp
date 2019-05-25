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
    TreeNode* convertBST(TreeNode* root) {
        great(root, 0);
        return root;
    }
    
    int great(TreeNode* node, int prev) {
        if (node) {
            node->val += great(node->right, prev);
            int temp = node->val;
            node->val += prev;
            return temp + great(node->left, node->val);
        }
        return 0;
    }
};
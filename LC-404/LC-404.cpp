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
     * Concepts: Pre-order Traversal
     */
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root)
            return 0;
        int sum = 0;
        preorder(root, sum);
        return sum;
    }
    
    void preorder(TreeNode* node, int& sum) {
        if (!node)
            return;
        if (node->left) {
            if (!node->left->left && !node->left->right)
                sum += node->left->val;
            else
                preorder(node->left, sum);
        }
        if (node->right)
            preorder(node->right, sum);
    }
};
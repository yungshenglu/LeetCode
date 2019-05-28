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
     * Concepts: Post-order Traversal
     */
    int findTilt(TreeNode* root) {
        int tilt = 0;
        postorder(root, tilt);
        return tilt;
    }
    
    int postorder(TreeNode* node, int& tilt) {
        if (!node)
            return 0;
        int left = 0, right = 0;
        if (node->left)
            left = postorder(node->left, tilt);
        if (node->right)
            right = postorder(node->right, tilt);
        tilt += abs(left - right);
        return (left + right + node->val);
    }
};
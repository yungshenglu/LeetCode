#include <climits>
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
     * Concepts: In-order Traversal
     */
    int minDiffInBST(TreeNode* root) {
        int minDiff = INT_MAX, val = -1;
        inorder(root, val, minDiff);
        return minDiff;
    }
    
    void inorder(TreeNode* node, int& val, int& minDiff) {
        if (node->left)
            inorder(node->left, val, minDiff);
        if (val >= 0)
            minDiff = min(minDiff, node->val - val);
        val = node->val;
        if (node->right)
            inorder(node->right, val, minDiff);
    }
};
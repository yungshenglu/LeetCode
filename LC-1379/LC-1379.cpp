/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    /**
     * Concepts: Recursive Traversal
     */
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (!original) return NULL;
        if (original == target) return cloned;
        
        TreeNode* match = getTargetCopy(original->left, cloned->left, target);
        if (match) return match;
        return getTargetCopy(original->right, cloned->right, target);
    }
};
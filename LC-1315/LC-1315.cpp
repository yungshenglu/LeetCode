/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    /**
     * Concepts: Depth-First Search (DFS)
     */
    int sumEvenGrandparent(TreeNode* root) {
        if (!root) return 0;
        
        int sums = 0;
        stack<TreeNode*> stk;
        stk.push(root);
        while (!stk.empty()) {
            TreeNode* curr = stk.top();
            stk.pop();
            
            if (curr->val % 2 == 0) {
                if (curr->left && curr->left->left)
                    sums += curr->left->left->val;
                if (curr->left && curr->left->right)
                    sums += curr->left->right->val;
                if (curr->right && curr->right->left)
                    sums += curr->right->left->val;
                if (curr->right && curr->right->right)
                    sums += curr->right->right->val;
            }
            
            if (curr->left)
                stk.push(curr->left);
            if (curr->right)
                stk.push(curr->right);
        }
        
        return sums;
    }
};
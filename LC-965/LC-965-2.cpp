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
     * Concepts: DFS
     */
    bool isUnivalTree(TreeNode* root) {
        return DFS(root, root->val);
    }
    
    bool DFS(TreeNode* node, int val) {
        return (!node || node->val == val && DFS(node->left, val) && DFS(node->right, val));
    }
};
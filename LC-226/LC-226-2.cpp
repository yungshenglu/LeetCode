#include <queue>

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
     * Concepts: Iteration
     */
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return NULL;
        
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty() && root) {
            TreeNode* node = que.front();
            que.pop();
            TreeNode* temp = node->left;
            node->left = node->right;
            node->right = temp;
            if (node->left)
                que.push(node->left);
            if (node->right)
                que.push(node->right);
        }
        return root;
    }
};
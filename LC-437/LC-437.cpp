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
     * Concepts: Depth-First Search (DFS)
     */
    int pathSum(TreeNode* root, int sum) {
        if (!root) return 0;
        return DFS(root, sum, 0) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
    
    int DFS(TreeNode* node, int sum, int curr) {
        if (!node)
            return 0;
        else if (node->val + curr == sum)
            return 1 + DFS(node->left, sum, node->val + curr) + DFS(node->right, sum, node->val + curr);
        else
            return DFS(node->left, sum, node->val + curr) + DFS(node->right, sum, node->val + curr);
    }
};
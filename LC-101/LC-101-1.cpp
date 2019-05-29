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
     * Concepts: Iteration - BFS
     */
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        que.push(root);
        while (!que.empty()) {
            TreeNode* node1 = que.front();
            que.pop();
            TreeNode* node2 = que.front();
            que.pop();
            
            if (!node1 && !node2)
                continue;
            if (!node1 || !node2)
                return false;
            if (node1->val != node2->val)
                return false;
            que.push(node1->left);
            que.push(node2->right);
            que.push(node1->right);
            que.push(node2->left);
        }
        return true;
    }
};
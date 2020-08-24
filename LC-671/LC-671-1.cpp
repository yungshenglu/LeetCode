#include <queue>
#include <climits>

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
     * Concepts: Breadth-First Search (BFS)
     */
    int findSecondMinimumValue(TreeNode* root) {
        int min1 = root->val;
        long min2 = LONG_MAX;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            TreeNode* node = que.front();
            que.pop();
            if (!node) continue;
            min1 = min(min1, node->val);
            if (node->val > min1 && node->val < min2)
                min2 = node->val;
            if (node->left)
                que.push(node->left);
            if (node->right)
                que.push(node->right);
        }
        return (min2 < LONG_MAX) ? (int)min2 : -1;
    }
};
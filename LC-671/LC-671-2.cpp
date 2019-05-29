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
     * Concepts: Depth-First Search (DFS)
     */
    int findSecondMinimumValue(TreeNode* root) {
        int min1 = root->val;
        long min2 = LONG_MAX;
        DFS(root, min1, min2);
        return (min2 < LONG_MAX) ? (int)min2 : -1;
    }
    
    void DFS(TreeNode* node, int& min1, long& min2) {
        if (node) {
            min1 = min(min1, node->val);
            if (node->val > min1 && node->val < min2)
                min2 = node->val;
            if (node->left)
                DFS(node->left, min1, min2);
            if (node->right)
                DFS(node->right, min1, min2);
        }
    }
};
#include <cstdlib>
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
    int findTilt(TreeNode* root) {
        int tilt = 0;
        DFS(root, tilt);
        return tilt;
    }
    
    int DFS(TreeNode* node, int& tilt) {
        if (!node) return 0;
        
        int left = 0, right = 0;
        if (node->left)
            left = DFS(node->left, tilt);
        if (node->right)
            right = DFS(node->right, tilt);
        tilt += abs(left - right);
        return (left + right + node->val);
    }
};
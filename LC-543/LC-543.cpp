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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 1;
        DFS(root, diameter);
        return diameter - 1;
    }
    
    int DFS(TreeNode* node, int& diameter) {
        if (!node)
            return 0;
        
        int left = 0, right = 0;
        if (node->left)
            left = DFS(node->left, diameter);
        if (node->right)
            right = DFS(node->right, diameter);
        diameter = max(diameter, left + right + 1);
        return max(left, right) + 1;
    }
};
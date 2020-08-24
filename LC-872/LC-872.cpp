#include <vector>

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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        DFS(root1, leaves1);
        DFS(root2, leaves2);
        return (leaves1 == leaves2);
    }
    
    void DFS(TreeNode* node, vector<int>& leaves) {
        if (!node) return;
        
        if (!node->left && !node->right)
            leaves.push_back(node->val);
        
        DFS(node->left, leaves);
        DFS(node->right, leaves);
    }
};
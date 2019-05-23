#include <map>

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
    bool isCousins(TreeNode* root, int x, int y) {
        map<int, int> depth;
        map<int, TreeNode*> parent;
        DFS(root, NULL, depth, parent);
        return (depth[x] == depth[y] && parent[x] != parent[y]);
    }
    
    void DFS(TreeNode* node, TreeNode* p, map<int, int>& depth, map<int, TreeNode*>& parent) {
        if (node) {
            depth[node->val] = (p != NULL) ? (depth[p->val] + 1) : 0;
            parent[node->val] = p;
            DFS(node->left, node, depth, parent);
            DFS(node->right, node, depth, parent);
        }
    }
};
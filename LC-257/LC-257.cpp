#include <vector>
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        DFS(root, paths, "");
        return paths;
    }
    
    void DFS(TreeNode* node, vector<string>& paths, string path) {
        if (!node)
            return;
        
        path = path + to_string(node->val);
        if (!node->left && !node->right)
            paths.push_back(path);
        
        DFS(node->left, paths, path + "->");
        DFS(node->right, paths, path + "->");
    }
};
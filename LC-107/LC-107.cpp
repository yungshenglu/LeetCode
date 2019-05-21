#include <vector>
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
     * Concepts: Breadth-First Search (BFS)
     */
    vector< vector<int> > levelOrderBottom(TreeNode* root) {
        vector< vector<int> > result;
        queue<TreeNode*> que;
        que.push(root);
        
        while (!que.empty() && root) {
            vector<int> child;
            int qSize = que.size();
            for (int i = 0; i < qSize; ++i) {
                TreeNode* node = que.front();
                que.pop();
                child.push_back(node->val);
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
            }
            result.insert(result.begin(), child);
        }
        return result;
    }
};
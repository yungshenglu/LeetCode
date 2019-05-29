#include <set>
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
     * Concepts: Breadth-First Search (BFS) and Hash Set
     */
    bool findTarget(TreeNode* root, int k) {
        set<int> diff;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            TreeNode* node = que.front();
            que.pop();
            if (!node)
                continue;
            if (diff.find(k - node->val) != diff.end())
                return true;
            diff.insert(node->val);
            que.push(node->left);
            que.push(node->right);
        }
        return false;
    }
};
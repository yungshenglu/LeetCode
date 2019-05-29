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
     * Concepts: Iteration
     */
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {     
        TreeNode* node = root;
        while (node) {
            if (p->val > node->val && q->val > node->val)
                node = node->right;
            else if (p->val < node->val && q->val < node->val)
                node = node->left;
            else
                return node;
        }
        return NULL;
    }
};
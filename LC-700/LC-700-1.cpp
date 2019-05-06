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
     * Concepts: DFS in Iteration
     */
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* curr = root;
        while (curr != NULL) {
            if (curr->val == val)
                return curr;
            else if (curr->val > val)
                curr = curr->left;
            else
                curr = curr->right;
        }
        return NULL;
    }
};
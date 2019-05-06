#include <string>

using namespace std;

/**
 * Definition for singly-linked list.
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
     * Concepts: DFS
     */
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL || root->val == val)
            return root;
        return (root->val < val) ? searchBST(root->right, val) : searchBST(root->left, val);
    }
};
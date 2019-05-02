#include <string>

using namespace std;

/**
 * Definition for singly-linked list.
 */ 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    /**
     * Concepts: DFS
     */
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root == NULL)
            return 0;
        if (L <= root->val && root->val <= R)
            return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        else if (root->val < L)
            return rangeSumBST(root->right, L, R);
        else
            return rangeSumBST(root->left, L, R);
    }
};
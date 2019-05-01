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
        int sum = 0;
        DFS(root, L, R, sum);
        return sum;
    }
    
    void DFS(TreeNode* node, int L, int R, int& sum) {
        if (node != NULL) {
            if (L <= node->val && node->val <= R)
                sum += node->val;
            if (L < node->val)
                DFS(node->left, L, R, sum);
            if (node->val < R)
                DFS(node->right, L, R, sum);
        }
    }
};
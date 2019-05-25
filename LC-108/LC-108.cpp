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
     * Concepts: Binary Search
     */
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BST(nums, 0, nums.size());
    }
    
    TreeNode* BST(vector<int>& nums, int s, int e) {
        if (s >= e)
            return NULL;
        int m = (s + e) / 2;
        TreeNode* node = new TreeNode(nums[m]);
        node->left = BST(nums, s, m);
        node->right = BST(nums, m + 1, e);
        return node;
    }
};
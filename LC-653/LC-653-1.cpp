#include <set>

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
     * Concepts: Hash Set
     * 1. Create a set to store the value of node.
     * 2. If the difference between the value and target is in set, return true.
     */
    bool findTarget(TreeNode* root, int k) {
        set<int> diff;
        return find(root, k, diff);
    }
    
    bool find(TreeNode* node, int k, set<int>& diff) {
        if (!node)
            return false;

        if (diff.find(k - node->val) != diff.end())
            return true;
        diff.insert(node->val);
        return (find(node->left, k, diff) || find(node->right, k, diff));
    }
};
#include <string>
#include <vector>

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
     * Concepts: Inorder Traversal
     */
    TreeNode* increasingBST(TreeNode* root) {
        if (!root)
            return NULL;
            
        vector<int> elements;
        inorder(root, elements);
        
        // Rearrange
        TreeNode* newRoot = new TreeNode(elements[0]);
        TreeNode* curr = newRoot;
        for (int i = 1; i < elements.size(); ++i) {
            curr->right = new TreeNode(elements[i]);
            curr = curr->right;
        }
        return newRoot;
    }
    
    void inorder(TreeNode* node, vector<int>& elements) {
        if (!node)
            return;
        inorder(node->left, elements);
        elements.push_back(node->val);
        inorder(node->right, elements);
    }
};
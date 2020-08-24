#include <stack>

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

// Define a item for storing the current value at the node
struct Item {
    int value;
    TreeNode* node;
    Item(TreeNode* _node, int _value): node(_node), value(_value) {};
};

class Solution {
public:
    /**
     * Concepts: Depth-First Search (DFS)
     */
    int sumRootToLeaf(TreeNode* root) {
        if (!root) return 0;
        
        stack<Item> stk;
        stk.push(Item(root, 0));
        int sum = 0;
        while (!stk.empty()) {
            Item item = stk.top();
            stk.pop();
            TreeNode* node = item.node;
            int curr = (item.value << 1) | node->val;
            if (!node->left && !node->right) {
                sum += curr;
                continue;
            }
            if (node->left)
                stk.push(Item(node->left, curr));
            if (node->right)
                stk.push(Item(node->right, curr));
        }
        return sum;
    }
};
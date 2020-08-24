/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

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
    int deepestLeavesSum(TreeNode* root) {
        if (!root) return 0;
        
        int maxLevel = 1;
        unordered_map<int, int> bucket;
        stack<Item> stk;
        stk.push(Item(root, 1));
        while (!stk.empty()) {
            Item item = stk.top();
            stk.pop();
            TreeNode* node = item.node;
            int level = item.value;
            if (!node->left && !node->right) {
                if (bucket.find(level) != bucket.end())
                    bucket[level] += item.node->val;
                else
                    bucket[level] = item.node->val;
                maxLevel = (level > maxLevel) ? level : maxLevel;
                continue;
            }
            if (node->left)
                stk.push(Item(node->left, level + 1));
            if (node->right)
                stk.push(Item(node->right, level + 1));
        }
        
        return bucket[maxLevel];
    }
};
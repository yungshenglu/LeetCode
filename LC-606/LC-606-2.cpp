#include <stack>
#include <set>
#include <string>

using namespace std;

/**
 * Definition for a binary tree node
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
     * Concepts: Using Stack
     * 1. Using a stack to emulate the process of traversal
     * 2. Using a set to record the visited nodes
     */
    string tree2str(TreeNode* t) {
        if (t == NULL)
            return "";
        
        string str = "";
        stack<TreeNode*> sta;
        set<TreeNode*> visitedNode;
        sta.push(t);
        while (!sta.empty()) {
            t = sta.top();
            if (visitedNode.find(t) != visitedNode.end()) {
                sta.pop();
                str += ")";
            }
            else {
                visitedNode.insert(t);
                str += ("(" + to_string(t->val));
                if (t->left == NULL && t->right != NULL)
                    str += "()";
                if (t->right != NULL)
                    sta.push(t->right);
                if (t->left != NULL)
                    sta.push(t->left);
            }
        }
        return str.substr(1, str.length() - 2);
    }
};
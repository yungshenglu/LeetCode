#include <string>
#include <vector>
#include <stack>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    /**
     * Concepts: DFS in Recursion
     */
    vector<int> preorder(Node* root) {
        if (!root)
            return {};
        
        vector<int> order;
        traversal(root, order);
        return order;
    }
    
    void traversal(Node* node, vector<int>& order) {
        if (node) {
            order.push_back(node->val);
            for (int i = 0; i < node->children.size(); ++i)
                traversal(node->children[i], order);
        }
    }
};

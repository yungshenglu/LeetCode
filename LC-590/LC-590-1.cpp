#include <algorithm>
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
     * Concepts: DFS in Iteration
     */
    vector<int> postorder(Node* root) {
        if (!root) return {};
        
        stack<Node*> sta;
        sta.push(root);
        vector<int> order;
        while (!sta.empty()) {
            Node* curr = sta.top();
            sta.pop();
            for (int i = 0; i < curr->children.size(); ++i)
                sta.push(curr->children[i]);
            order.push_back(curr->val);
        }
        reverse(order.begin(), order.end());
        return order;
    }
};
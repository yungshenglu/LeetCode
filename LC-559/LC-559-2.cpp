#include <string>
#include <vector>
#include <queue>

using namespace std;

// Definition for a Node.
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
     * Concepts: BFS in Iteration
     */
    int maxDepth(Node* root) {
        if (!root)
            return 0;
        
        queue<Node*> que;
        que.push(root);
        int depth = 0;
        while (!que.empty()) {
            ++depth;
            int breadth = que.size();
            for (int i = 0; i < breadth; ++i) {
                Node* curr = que.front();
                que.pop();
                for (int j = 0; j < curr->children.size(); ++j)
                    que.push(curr->children[j]);
            }
        }
        return depth;
    }
};
#include <vector>
#include <queue>

using namespace std;

/**
 * Definition for a Node.
 */
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
     * Concepts: Breadth-First Search (BFS)
     */
    vector<vector<int>> levelOrder(Node* root) {
        vector< vector<int> > result;
        queue<Node*> que;
        que.push(root);
        
        while (!que.empty() && root) {
            vector<int> child;
            int qSize = que.size();
            for (int i = 0; i < qSize; ++i) {
                Node* node = que.front();
                que.pop();
                child.push_back(node->val);
                for (int j = 0; j < node->children.size(); ++j)
                    que.push(node->children[j]);
            }
            result.push_back(child);
        }
        return result;
    }
};
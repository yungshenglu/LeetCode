#include <vector>
#include <queue>
#include <map>

using namespace std;

/**
 * Definition for a Node.
 */

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    /**
     * Concepts: BFS
     */
    Node* BFS(Node* node, map<Node*, Node*> graph) {
        if (!node) return NULL;

        queue<Node*> que;
        que.push(node);
        graph[node] = new Node(node->val);

        while (!que.empty()) {
            Node* tmp = que.front();
            que.pop();

            vector<Node*> neighbors = tmp->neighbors;
            int n = neighbors.size();
            for (int i = 0; i < n; ++i){
                if (graph.find(neighbors[i]) == graph.end()) {
                    Node* t = new Node(neighbors[i]->val);
                    graph[neighbors[i]] = t;
                    que.push(neighbors[i]);
                }
                graph[tmp]->neighbors.push_back(graph[neighbors[i]]);
            }
        }

        return graph[node];
    }

    Node* cloneGraph(Node* node) {
        map<Node*, Node*> graph;
        return BFS(node, graph);
    }
};
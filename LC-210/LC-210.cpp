#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    /**
     * Concepts: BFS
     */
    vector<int> findOrder(int numCourses, vector< vector<int> >& prerequisites) {
        vector< vector<int> > graph(numCourses);
        vector<int> degree(numCourses, 0);
        for (int i = 0; i < prerequisites.size(); ++i) {
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            ++degree[prerequisites[i][0]];
        }

        queue<int> que;
        for (int i = 0; i < numCourses; ++i) {
            if (degree[i] == 0) {
                que.push(i);
            }
        }

        vector<int> order;
        if (que.size() == 0) return order;

        while (!que.empty()) {
            int tmp = que.front();
            que.pop();

            order.push_back(tmp);
            for (int i = 0; i < graph[tmp].size(); ++i) {
                degree[graph[tmp][i]]--;
                if (degree[graph[tmp][i]]==0) {
                    que.push(graph[tmp][i]);
                }
            }
        }

        if (order.size() == numCourses) {
            return order;
        }
        return vector<int> {};
    }
};

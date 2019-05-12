#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Greedy
     */
    vector<int> gardenNoAdj(int N, vector< vector<int> >& paths) {
        vector< vector<int> > neighbor(N, vector<int>{});
        for (int i = 0; i < paths.size(); ++i) {
            neighbor[paths[i][0] - 1].push_back(paths[i][1] - 1);
            neighbor[paths[i][1] - 1].push_back(paths[i][0] - 1);
        }
        
        vector<int> result(N, 0);
        for (int i = 0; i < N; ++i) {
            vector<bool> usedType(5, false);
            for (int j = 0; j < neighbor[i].size(); ++j)
                usedType[result[neighbor[i][j]]] = true;
            for (int j = 1; j <= 4; ++j) {
                if (!usedType[j])
                    result[i] = j;
            }
        }
        return result;
    }
};
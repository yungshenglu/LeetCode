#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Counting Sort
     */
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<int> counter(R + C + 1, 0);
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                int d = abs(i - r0) + abs(j - c0);
                ++counter[d + 1];
            }
        }
        
        for (int i = 1; i < counter.size(); ++i)
            counter[i] += counter[i - 1];
        
        vector< vector<int> > coordinates(R * C);
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                int d = abs(i - r0) + abs(j - c0);
                coordinates[counter[d]] = vector<int>{i, j};
                ++counter[d];
            }
        }
        return coordinates;
    }
};
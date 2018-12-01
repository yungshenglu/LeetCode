#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Mathematical Approach
     * 1. From the top, the shadow made by the shape will be 1 square for each non-zero value
     * 2. From the side, the shadow made by the shape will be the largest value for each row in the grid
     * 3. From the front, the shadow made by the shape will be the largest value for each column in the grid
     */
    int projectionArea(vector< vector<int> >& grid) {
        int result = 0;
        for (int i = 0; i < grid.size(); ++i) {
            int bestRow = 0, bestCol = 0;
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j])
                    ++result;
                bestRow = max(bestRow, grid[j][i]);
                bestCol = max(bestCol, grid[i][j]);
            }
            result += (bestRow + bestCol);
        }
        return result;
    }
};
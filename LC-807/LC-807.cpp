#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Row and Column Maximum
     */
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> skylineRow(n, -1), skylineCol(n, -1);
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                skylineRow[i] = max(skylineRow[i], grid[i][j]);
                skylineCol[i] = max(skylineCol[i], grid[j][i]);
            }
        }
        
        int maxIncrease = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                maxIncrease += min(skylineRow[i], skylineCol[j]) - grid[i][j];
            }
        }
        return maxIncrease;
    }
};
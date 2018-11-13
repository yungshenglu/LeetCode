#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Compare each one with top-left elements (brute)
     */
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 1; i < matrix.size(); ++i) {
            for (int j = 1; j < matrix[i].size(); ++j) {
                if (matrix[i -1][j - 1] != matrix[i][j])
                    return false;
            }
        }
        return true;
    }
};
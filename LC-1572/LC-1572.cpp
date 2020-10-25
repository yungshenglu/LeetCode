#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Linear Approach
     */
    int diagonalSum(vector< vector<int> >& mat) {
        int matSize = mat.size(), sum = 0;
        if (matSize < 2) {
            return (matSize > 0) ? mat[0][0] : sum;
        }

        bool isOddSize = mat.size() % 2 == 1;
        for (size_t i = 0; i < matSize; ++i) {
            sum += (mat[i][i] + mat[matSize - 1 - i][i]);
        }
        return isOddSize ? sum - mat[matSize / 2][matSize / 2] : sum;
    }
};
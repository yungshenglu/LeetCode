#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Iterate Through Grid
     * Average all neighbors by iterating through each grid
     */
    vector< vector<int> > imageSmoother(vector< vector<int> >& M) {
        vector< vector<int> > sums;
        for (int i = 0; i < M.size(); ++i) {
            vector<int> rowSums(M[0].size(), 0);
            for (int j = 0; j < M[0].size(); ++j) {
                int count = 0;
                for (int x = i - 1; x <= i + 1; ++x) {
                    for (int y = j - 1; y <= j + 1; ++y) {
                        if (x >= 0 && x < M.size() && y >= 0 && y < M[0].size()) {
                            rowSums[j] += M[x][y];
                            ++count;
                        }
                    }
                }
                rowSums[j] /= count;
            }
            sums.push_back(rowSums);
        }
        return sums;
    }
};
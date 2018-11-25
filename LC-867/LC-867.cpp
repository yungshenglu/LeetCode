#include <vector>

using namespace std;

class Solution {
    /**
     * Concepts: Copy Directly
     */
public:
    vector< vector<int> > transpose(vector< vector<int> >& A) {
        vector< vector<int> > result;
        for (int j = 0; j < A[0].size(); ++j) {
            vector<int> col;
            for (int i = 0; i < A.size(); ++i)
                col.push_back(A[i][j]);
            result.push_back(col);
        }
        return result;
    }
};
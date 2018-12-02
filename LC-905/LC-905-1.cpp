#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two-pass Appraoch
     * 1. Push all even elements into vector
     * 2. Push all odd elements into vector
     */
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> result;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 0)
                result.push_back(A[i]);
        }
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 1)
                result.push_back(A[i]);
        }
        return result;
    }
};
#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two-pass Approach
     * 1. First pass: put the even elements into array[0], array[2], array[4], ...
     * 2. Second pass: put the odd elements into array[1], array[3], array[5], ...
     */
    vector<int> sortArrayByParityII(vector<int>& A) {
        int j = 0;
        vector<int> result(A.size(), 0);

        // First pass
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 0) {
                result[j] = A[i];
                j += 2;
            }
        }
        
        // Second pass
        j = 1;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 1) {
                result[j] = A[i];
                j += 2;
            }
        }
        return result;
    }
};
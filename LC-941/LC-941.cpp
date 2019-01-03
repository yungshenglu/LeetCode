#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: One-Pass
     */
    bool validMountainArray(vector<int>& A) {
        int i = 0;
        // Walk up
        while (i + 1 < A.size() && A[i] < A[i + 1])
            ++i;
        if (i == 0 || i == A.size() - 1)
            return false;
        // Walk down
        while (i + 1 < A.size() && A[i] > A[i + 1])
            ++i;
        return (i == A.size() - 1);
    }
};
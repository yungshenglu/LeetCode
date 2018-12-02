#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: In-place Approach with Quick sorting
     * We'll maintain two pointers i and j. 
     * The loop invariant is everything below i has parity 0 (i.e., A[k] % 2 == 0 when k < i), and everything above j has parity 1.
     * Consider the following cases of (A[i] % 2, A[j] % 2):
     * 1. If it is (0, 1), then everything is correct: i++ and j--
     * 2. If it is (1, 0), we swap them so they are correct, then continue
     * 3. If it is (0, 0), only the i place is correct, so we i++ and continue
     * 4. If it is (1, 1), only the j place is correct, so we j-- and continue
     */
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0, j = A.size() - 1;
        while (i < j) {
            if (A[i] % 2 > A[j] % 2)
                swap(A[i], A[j]);
            if (A[i] % 2 == 0)
                ++i;
            if (A[j] % 2 == 1)
                --j;
        }
        return A;
    }
};
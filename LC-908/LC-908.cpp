#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Math Approach
     * 1. Find out the maximum and minimum element in the array
     * 2. The smallest difference is:
     *    max - min - 2 * K
     * 3. Make sure the smallest difference is positive
     */
    int smallestRangeI(vector<int>& A, int K) {
        int min = A[0], max = A[0];
        for (int i = 1; i < A.size(); ++i) {
            max = (A[i] > max) ? A[i] : max;
            min = (A[i] < min) ? A[i] : min;
        }
        int result = max - min - 2 * K;
        return (result > 0) ? result : 0;
    }
};
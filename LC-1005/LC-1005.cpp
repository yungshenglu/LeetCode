#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     * 1. Sort the input array
     * 2. To make the maximum sum of array, let the negative element be positive first
     * 3. Sort the array again to make sure the array is in order
     * 4. If there still have K (i.e., K > 0), determine whether the K is odd or even
     *    - If K is odd, then only change the first element into negative
     *    - If K is even, then no change
     * 5. Sum up the array
     */
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int i = 0, sum = 0;
        sort(A.begin(), A.end());
        while (K > 0 && i < A.size()) {
            if (A[i] < 0) {
                A[i] = -A[i];
                --K;
            }
            ++i;
        }
        sort(A.begin(), A.end());
        A[0] = (K % 2) ? -A[0] : A[0];
        for (int i = 0; i < A.size(); ++i)
            sum += A[i];
        return sum;
    }
};
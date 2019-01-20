#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Absoulte Value and Sorting
     * 1. Get the absolute value of each element in the array
     * 2. Sorting
     * 3. Get the square of each element in the array
     */
    vector<int> sortedSquares(vector<int>& A) {
        for (int i = 0; i < A.size(); ++i)
            A[i] = abs(A[i]);
        sort(A.begin(), A.end());
        for (int i = 0; i < A.size(); ++i)
            A[i] = A[i] * A[i];
        return A;
    }
};
#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: One-pass Approach
     * Simplify the variable in two-pass approach
     */ 
    bool isMonotonic(vector<int>& A) {
        bool isIncreasing = true, isDecreasing = true;
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] < A[i + 1])
                isDecreasing = false;
            if (A[i] > A[i + 1])
                isIncreasing = false;
        }
        return isIncreasing || isDecreasing;
    }
};
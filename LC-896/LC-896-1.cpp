#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two-pass Approach
     * Determine whether the array is monotonic increasing and decreasing respectively
     */ 
    bool isMonotonic(vector<int>& A) {
        return isIncreasing(A) || isDecreasing(A);
    }
private:
    bool isIncreasing(vector<int>& A) {
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] > A[i + 1])
                return false;
        }
        return true;
    }
    
    bool isDecreasing(vector<int>& A) {
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] < A[i + 1])
                return false;
        }
        return true;
    }
};
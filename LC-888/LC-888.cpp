#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Solve Equation
     * Suppose SA is the number of total candy Alice has
     *         SB is the number of total candy Bob has
     *         x is the number of candy Alice gives to Bob
     *         y is the number of candy Bob gives to Alice
     * Then, SA - x + y = SB - y + x
     *       y = x + (SB - SA) / 2
     */ 
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = 0, sumB = 0;
        for (int i = 0; i < A.size(); ++i)
            sumA += A[i];
        for (int i = 0; i < B.size(); ++i)
            sumB += B[i];
        
        set<int> result;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < B.size(); ++j) {
                if (A[i] == B[j] + (sumA - sumB) / 2) {
                    result.insert(A[i]);
                    result.insert(B[j]);
                }
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};
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
        
        int dis = (sumA - sumB) / 2;
        set<int> result(A.begin(), A.end());
        for (int i = 0; i < B.size(); ++i) {
            if (result.count(B[i] + dis))
                return vector<int>{B[i] + dis, B[i]};
        }
        return vector<int>{};
    }
};
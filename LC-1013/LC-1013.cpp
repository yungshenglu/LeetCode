#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     */
    bool canThreePartsEqualSum(vector<int>& A) {
        int equalSum = 0;
        for (size_t i = 0; i < A.size(); ++i)
            equalSum += A[i];
        equalSum /= 3;
        
        int s = 0, group = 0;
        for (size_t i = 0; i < A.size(); ++i) {
            s += A[i];
            if (s == equalSum) {
                s = 0;
                ++group;
            }
        }
        return (group == 3) ? true : false;
    }
};
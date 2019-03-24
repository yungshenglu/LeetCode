#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Counting
     * 1. Compute the sum of the input array and divied it by 3 
     * 2. Count the group whether the current of sum is the euqal-sum of three groups
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
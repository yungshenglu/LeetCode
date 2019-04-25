#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Iteration
     * Use left-shift and or operations in each iteration to add the current bit into accumulator
     * If the N_i can be divisible by 5, then let the accumulator be 0; otherwise may be overflow
     */
    vector<bool> prefixesDivBy5(vector<int>& A) {
        if (A.size() == 0)
            return vector<bool>{};
        
        vector<bool> answer;
        unsigned long long int curr = 0;
        for (int i = 0; i < A.size(); ++i) {
            curr = (curr << 1) | A[i];
            if (curr % 5 == 0) {
                answer.push_back(true);
                curr = 0;
            }
            else
                answer.push_back(false);
        }
        return answer;
    }
};
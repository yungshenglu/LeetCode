#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Space Optimal, Operation Sub-Optimal
     * 1. If the current element is not 0, then append it just in front of last non 0 element we found
     * 2. Fill the remaining array with 0
     */
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroAt = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0)
                nums[lastNonZeroAt++] = nums[i];
        }
        
        for (int i = lastNonZeroAt; i < nums.size(); ++i)
            nums[i] = 0;
    }
};
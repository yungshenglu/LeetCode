#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Space Sub-Optimal
     * 1. Use another temp vector for storing
     * 2. Count the number of the zero in the original vector
     */
    void moveZeroes(vector<int>& nums) {
        vector<int> result;
        int zeroCount = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0)
                ++zeroCount;
            else
                result.push_back(nums[i]);
        }
        
        while (zeroCount--)
            result.push_back(0);
        nums = result;
    }
};
#include <vectior>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Get the sum from previous sum and current number
     */
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sums(nums.size());
        sums[0] = nums[0];
        
        for (int i = 1; i < nums.size(); ++i)
            sums[i] = sums[i - 1] + nums[i];
        return sums;
    }
};
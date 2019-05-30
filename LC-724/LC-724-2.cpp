#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Prefix Sum
     */
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftSum = 0;
        for (int i = 0; i < nums.size(); ++i)
            sum += nums[i];
        for (int i = 0; i < nums.size(); ++i) {
            if (leftSum == sum - leftSum - nums[i])
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     * 1. Get the value of index 0 and 1 in the array
     * 2. Current maximum money = max(money[i - 2] + money[i], money[i - 1])
     */
    int rob(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        else if (nums.size() == 1)
            return nums[0];
        
        int prev = nums[0], curr = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); ++i) {
            int temp = curr;
            curr = max(prev + nums[i], curr);
            prev = temp;
        }
        return curr;
    }
};
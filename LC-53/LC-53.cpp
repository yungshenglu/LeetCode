#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     */ 
    int maxSubArray(vector<int>& nums) {
        vector<int> sub(nums.size());
        sub[0] = nums[0];
        
        int maxSub = sub[0];
        for (int i = 1; i < nums.size(); ++i) {
            sub[i] = max(sub[i - 1] + nums[i], nums[i]);
            maxSub = (sub[i] > maxSub) ? sub[i] : maxSub;
        }
        return maxSub;
    }
};
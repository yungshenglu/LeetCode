#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Greedy Approach
     * 1. Create an array to store the maximum reach steps and get initial
     * 2. Iterate find the maximum reach steps:
     *    - If the maxReach[i - 1] is lower than index i then return false
     *    - Else get max(maxReach[i - 1], i + nums[i]) and if maxReach[i] can exceed (nums.size() - 1) then return true
     */
    bool canJump(vector<int>& nums) {
        int numsLen = nums.size();
        if (numsLen <= 1) {
            return true;
        }

        vector<int> maxReach(numsLen);
        maxReach[0] = nums[0];

        for (int i = 1; i < numsLen; ++i) {
            if (maxReach[i - 1] < i) {
                return false;
            }
            maxReach[i] = max(maxReach[i - 1], i + nums[i]);
            if (maxReach[i] >= numsLen - 1) {
                return true;
            }
        }

        return false;
    }
};

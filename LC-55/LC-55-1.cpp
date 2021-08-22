#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming (DP)
     * 1. Create an array to store whether we can arrive this index
     * 2. Iterate entire array
     */
    bool canJump(vector<int>& nums) {
        int numsLen = nums.size();
        if (numsLen <= 1) {
            return true;
        }

        vector<bool> state(numsLen, false);
        state[0] = true;

        for (int i = 1; i < numsLen; ++i) {
            for (int j = i -1; j >= 0; --j) {
                if (state[j] && j + nums[j] >= i) {
                    state[i] = true;
                    break;
                }
            }
        }
        return state[numsLen - 1];
    }
};

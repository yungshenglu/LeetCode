#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two-Pass
     */
    int dominantIndex(vector<int>& nums) {
        int maxIndex = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (maxIndex != i && nums[maxIndex] < 2 * nums[i])
                return -1;
        }
        return maxIndex;
    }
};
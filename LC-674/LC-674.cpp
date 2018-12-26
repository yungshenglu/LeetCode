#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sliding Window
     * 1. Mark the index when the list became non-increasing as anchor
     * 2. Get the maximum length of continuous increasing subsequence
     *    length = max(length, i - (anchor + 1))
     */
    int findLengthOfLCIS(vector<int>& nums) {
        int longestLength = 0, anchor = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i - 1] >= nums[i])
                anchor = i;
            longestLength = max(longestLength, i - anchor + 1);
        }
        return longestLength;
    }
};
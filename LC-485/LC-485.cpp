#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Appraoch
     */
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i])
                ++count;
            else {
                max = (count > max) ? count : max;
                count = 0;
            }
            max = (count > max) ? count : max;
        }
        return max;
    }
};
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Basic Approach
     * Find out the element when nums[i] > nums[i + 1]
     * 1. Let nums[i] = nums[i + 1] when the element whether nums[i - 1] > nums[i + 1]
     * 2. Else, nums[i + 1] = nums[i]
     */
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size() - 1 && count < 2; ++i) {
            if (nums[i] > nums[i + 1]) {
                ++count;
                if (i - 1 < 0 || nums[i - 1] <= nums[i + 1]) 
                    nums[i] = nums[i + 1];
                else 
                    nums[i + 1] = nums[i];
            }
        }
        return (count < 2);
    }
};
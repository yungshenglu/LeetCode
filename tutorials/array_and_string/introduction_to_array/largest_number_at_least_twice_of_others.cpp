#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. Find out the index of the maximum and the second maximum element
     * 2. Determine whether the maxium element can twice greater than the second maximum element
     */
    int dominantIndex(vector<int>& nums) {
        int max1 = -1, max2 = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > nums[max1]) {
                max2 = max1;
                max1 = i;
            }
            else if (nums[i] < nums[max1] && nums[i] > nums[max2])
                max2 = i;
        }
        return (nums[max2] * 2 <= nums[max1]) ? max1 : -1;
    }
};
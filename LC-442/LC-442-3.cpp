#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Rearange
     * 1. Let the element be the position (index - 1)
     * 2. If the element appear twice, then the second element will not be the position (index - 1)
     */
    vector<int> findDuplicates(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[nums[i] - 1] != nums[i])
                swap(nums[nums[i] - 1], nums[i]);
            else
                ++i;
        }
        
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != i + 1)
                result.push_back(nums[i]);
        }
        return result;
    }
};
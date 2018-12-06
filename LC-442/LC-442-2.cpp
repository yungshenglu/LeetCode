#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     * 1. Sort the list first
     * 2. The same elements are ordered continuously 
     */
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == nums[i + 1])
                result.push_back(nums[i]);
        }
        return result;
    }
};
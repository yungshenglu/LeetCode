#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     * 1. Sort the list first
     * 2. If there is a duplicate elements in it, then it will be sorted continously
     */
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i - 1] == nums[i])
                return true;
        }
        return false;
    }
};
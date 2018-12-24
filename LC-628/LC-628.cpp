#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     */
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return max(nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3], nums[0] * nums[1] * nums[nums.size() - 1]);
    }
};
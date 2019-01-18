#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Extra Space Approach
     * Use an extra vector to store the correct position of the elements
     */
    void rotate(vector<int>& nums, int k) {
        vector<int> rotate(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i)
            rotate[(i + k) % nums.size()] = nums[i];
        for (int i = 0; i < nums.size(); ++i)
            nums[i] = rotate[i];
    }
};
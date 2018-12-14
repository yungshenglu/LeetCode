#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two-pass Approach
     * 1. Product all the elements in the left-hand side for each
     * 2. Prodict all the elements in the right-hand side for each
     */
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        // First pass
        int curr = 1;
        for (int i = 0; i < nums.size(); ++i) {
            result[i] = curr;
            curr *= nums[i];
        }
        // Second pass
        curr = 1;
        for (int i = nums.size() - 1; i >= 0; --i) {
            result[i] *= curr;
            curr *= nums[i];
        }
        return result;
    }
};
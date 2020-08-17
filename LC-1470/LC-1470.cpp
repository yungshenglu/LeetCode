#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Use extra space for getting the result of shuffle
     */
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n);
        for (int i = 0, j = n, k = 0; i < n && j < 2 * n && k < 2 * n; ++i, ++j, k += 2) {
            result[k] = nums[i];
            result[k + 1] = nums[j];
        }
        return result;
    }
};
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Cumulative Sum
     * 1. Sum up the elements of the given array from the first element up to the element at the i-th index
     * 2. Find the sum of elements from the index i to (i + k), all we need to do is to use: sum[i] - sum[i-k]
     */
    double findMaxAverage(vector<int>& nums, int k) {
        vector<int> sums(nums.size());
        for (int i = 0; i < nums.size(); ++i)
            sums[i] = sums[i - 1] + nums[i];
        double result = sums[k - 1] * 1.0;
        for (int i = k; i < nums.size(); ++i)
            result = max(result, (sums[i] - sums[i - k]) * 1.0);
        return result / k;
    }
};
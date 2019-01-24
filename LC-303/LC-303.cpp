#include <vector>

using namespace std;

class NumArray {
public:
    /**
     * Concepts: Dynamic Programming
     * 1. Calculate the cumulative sum from index 0 to k
     * 2. Return the sum in range by sums[j + 1] - sums[i]
     */
    NumArray(vector<int> nums) {
        vector<int> newSums(nums.size() + 1);
        sums = newSums;
        for (int i = 0; i < nums.size(); ++i)
            sums[i + 1] = sums[i] + nums[i];
    }

    int sumRange(int i, int j) {
        return (sums[j + 1] - sums[i]);
    }

private:
    vector<int> sums;
};
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two Pointers
     * 1. Sort the input array nums
     * 2. Make two pointers left and right at i + 1 and n - 1 respectively
     * 3. Check the sum of of nums[i] + nums[left] + nums[right] which is closest to the target
     */
    int threeSumClosest(vector<int>& nums, int target) {
        int result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; ++i) {
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target) {
                    return sum;
                }
                
                if (abs(sum - target) < abs(result - target)) {
                    result = sum;
                }
                if (sum > target) {
                    --right;
                } else {
                    ++left;
                }
            }
        }
        return result;
    }
};

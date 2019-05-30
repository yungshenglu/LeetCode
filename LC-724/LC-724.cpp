#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     */
    int pivotIndex(vector<int>& nums) {
        vector<int> left(nums.size()), right(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            left[i] = addSums(nums, 0, i);
            right[i] = addSums(nums, i + 1, nums.size());
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            if (left[i] == right[i])
                return i;
        }
        return -1;
    }
    
    int addSums(vector<int>& nums, int s, int t) {
        int sums = 0;
        for (int i = s; i < t; ++i)
           sums += nums[i];
        return sums;
    }
};
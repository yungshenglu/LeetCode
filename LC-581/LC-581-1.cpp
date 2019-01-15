#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Compare with Sorting Array
     * 1. Copy the original array and sort
     * 2. Compare the different between original and sorting array, then find out the starting and ending index
     * 3. Calculate the length of subarray
     */
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sort_nums = nums;
        sort(sort_nums.begin(), sort_nums.end());
        int start = sort_nums.size(), end = 0;
        for (int i = 0; i < sort_nums.size(); ++i) {
            if (sort_nums[i] != nums[i]) {
                start = min(start, i);
                end = max(end, i);
            }
        }
        return ((end - start >= 0) ? (end - start + 1) : 0);
    }
};
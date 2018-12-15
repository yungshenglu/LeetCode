#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     * 1. Sort the elements in monotonically increasing (or decreasing) order
     * 2. The majority element can be found at index (n / 2) if n is odd
     * 3. The majority element can be found at index (n / 2 + 1) if n is even
     */
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};
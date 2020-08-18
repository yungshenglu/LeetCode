#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smallerNumbers(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (i != j && nums[j] < nums[i]) {
                    ++smallerNumbers[i];
                }
            }
        }
        return smallerNumbers;
    }
};
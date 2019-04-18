#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Difference of Sum
     */
    int missingNumber(vector<int>& nums) {
        int sum = (1 + nums.size()) * nums.size() / 2;
        int total = 0;
        for (int i = 0; i < nums.size(); ++i)
            total += nums[i];
        if (total == sum)
            return 0;
        else
            return sum - total;
    }
};
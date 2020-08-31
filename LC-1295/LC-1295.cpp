#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Stringify
     */
    int findNumbers(vector<int>& nums) {
        int evenDigitNum = 0, numsLen = nums.size();
        for (int i = 0; i < numsLen; ++i) {
            string numStr = to_string(nums[i]);
            if (numStr.size() % 2 == 0)
                ++evenDigitNum;
        }
        return evenDigitNum;
    }
};
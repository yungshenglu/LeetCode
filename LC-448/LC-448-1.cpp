#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Flip Approach
     * 1. Mark every elements with multiply by (-1) when appearing
     * 2. Because some elements will appear twice:
     *    If the element become positive after multiplying by (-1), then the element has already appeared
     *    Add the index of the appeared element by 1 and return
     */
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0)
                nums[index] *= -1;
        }
        
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0)
                result.push_back(i + 1);
        }
        return result;
    }
};
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Using Constant Space
     * 1. Iterate the original array
     *    Multiply the element by (-1) in iteration
     *    If the element is negative, then the element is duplicate
     * 2. Iterate the array again
     *    If the element is positive, then the missing element is add the index by 1
     */
    vector<int> findErrorNums(vector<int>& nums) {
        int dup = -1, miss = 1;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            if (nums[abs(*it) - 1] < 0)
                dup = abs(*it);
            else
                nums[abs(*it) - 1] *= -1;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0)
                miss = i + 1;
        }
        return vector<int>{ dup, miss };
    }
};
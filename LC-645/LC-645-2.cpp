#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     * 1. Sort the original array
     * 2. Find out the duplicate element in each iteration
     * 3. Find out the missing element by checking nums[i] > nums[i - 1] + 1 in each iteration
     *    Missing = nums[i - 1] + 1
     * 4. If the missing element is not the last one, then return the size of the original array
     *    Else return the missing element
     */
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size(), miss = 1, dup = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; ++i) {
            if (nums[i - 1] == nums[i])
                dup = nums[i - 1];
            else if (nums[i] > nums[i - 1] + 1)
                miss = nums[i - 1] + 1;
        }
        return vector<int>{ dup, (nums[n - 1] != n) ? n : miss };
    }
};
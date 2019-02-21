#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Using Set
     * 1. Create a set to store an unique element in the nums
     * 2. If the element has not already exist in the set, add into current sum
     * 3. Missing number = Original sum - Current sum
     */
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> table;
        int n = nums.size(), sum = 0, dup = 0;
        for (int i = 0; i < n; ++i) {
            set<int>::iterator it = table.find(nums[i]);
            if (it == table.end()) {
                table.insert(nums[i]);
                sum += nums[i];
            }
            else
                dup = nums[i];
        }
        return vector<int>{ dup, (n * (1 + n) / 2) - sum };
    }
};
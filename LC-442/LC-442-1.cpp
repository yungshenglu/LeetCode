#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Hash Table
     * 1. Create a hash table to store the frequency of each number in the list
     * 2. Count the frequency of each number in the list and check whether the frequency is greater than 1 in each iteration
     */
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> hash(nums.size(), 0), result;
        for (int i = 0; i < nums.size(); ++i) {
            ++hash[nums[i] - 1];
            if (hash[nums[i] - 1] > 1)
                result.push_back(nums[i]);
        }
        return result;
    }
};
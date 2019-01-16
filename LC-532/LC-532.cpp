#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sort & Hash Table
     * 1. Sort the input array first
     * 2. Use a hash table to store the unique k-diff pair
     * 3. Because the array is sorted, only need to consider when the difference between each element is <= k
     */
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<int, int> hash;
        for (int i = 0; i < nums.size() ; ++i) {
            for (int j = i + 1; j < nums.size() && nums[j] - nums[i] <= k; ++j) {
                if (nums[j] - nums[i] == k)
                    hash[nums[i]] = nums[j];
            }
        }
        return hash.size();
    }
};
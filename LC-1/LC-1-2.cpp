#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two-pass Approach
     * 1. Use hash table to store the value and the index in the list
     * 2. Use "std::map.find" to find out the satisfied value
     */
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        for (int i = 0; i< nums.size(); ++i)
            hash[nums[i]] = i;
        
        for (int i = 0; i < nums.size(); ++i) {
            map<int, int>::iterator it = hash.find(target - nums[i]);
            if (it != hash.end() && it->second != i)
                return vector<int>{i, it->second};
        }
        return vector<int>{};
    }
};
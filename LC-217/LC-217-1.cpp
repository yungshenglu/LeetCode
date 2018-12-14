#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Hash Approach
     * Use a hash table to store the frequency of each number
     */
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> hash;
        map<int, int>::iterator it;
        for (int i = 0; i < nums.size(); ++i) {
            it = hash.find(nums[i]);
            if (it != hash.end()) {
                if (++(it->second))
                    return true;
            }
            else
                hash[nums[i]] = 1;
        }
        return false;
    }
};
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Hash Table
     * 1. Use hash table to record whether the identical elements appears twice in distance k
     * 2. Determine whether the element has already existed in the hash table
     */
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> elements;
        set<int>::iterator it;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k)
                elements.erase(nums[i - k - 1]);
            it = elements.find(nums[i]);
            if (it != elements.end())
                return true;
            else
                elements.insert(nums[i]);
        }
        return false;
    }
};
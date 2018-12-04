#include <vector>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Hash table
     * 1. Find out the longest list and make it into a hash table
     * 2. Iterate each element in the shortest list to find the intersection and store into a set
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> hash;
        vector<int> store;
        if (nums1.size() < nums2.size()) {
            store = nums1;
            hash = buildHash(nums2);
        }
        else {
            store = nums2;
            hash = buildHash(nums1);
        }
        
        set<int> result;
        for (int i = 0; i < store.size(); ++i) {
            map<int, int>::iterator it = hash.find(store[i]);
            if (it != hash.end())
                result.insert(it->first);
        }
        return vector<int>(result.begin(), result.end());
    }
    
private:
    map<int, int> buildHash(vector<int>& nums) {
        map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i)
            hash[nums[i]] = i;
        return hash;
    }
};
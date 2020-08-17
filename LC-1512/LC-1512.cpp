#include <unordered_map>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Use ordered-map to count each identical number in array
     */
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> bucket;
        for (int i = 0; i < nums.size(); ++i) {
            ++bucket[nums[i]];
        }
        
        int pairCount = 0;
        for (int i = 0; i < bucket.size(); ++i) {
            if (bucket[i] > 2)
                pairCount += (bucket[i] * (bucket[i] - 1)) / 2;
            else if (bucket[i] == 2)
                ++pairCount;
        }
        return pairCount;
    }
};
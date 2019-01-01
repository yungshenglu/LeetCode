#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two Pointers
     * 1. Keep two pointers i and j, where i is the slow-runner while j is the fast-runner
     * 2. As long as nums[i] = nums[j], we increment j to skip the duplicate
     * 3. When we encounter nums[j] != nums[i], the duplicate run has ended so we must copy its value to nums[i + 1]
     * 4. i is then incremented and we repeat the same process again until j reaches the end of array
     */ 
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        int prev = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[prev] != nums[i]) {
                ++prev;
                nums[prev] = nums[i];
            }
        }
        return prev + 1;
    }
};
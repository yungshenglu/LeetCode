#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two Pointers
     * 1. If nums[j] != val nums[j], copy nums[j] to nums[i] and increment both indexes at the same time 
     * 2. Repeat the process until j reaches the end of the array and the new length is i
     */ 
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                ++i;
            }
        }
        return i;
    }
};
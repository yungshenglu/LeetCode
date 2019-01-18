#include <vector>

using namespace std;

class Solution {    
public:
    /**
     * Concepts: Reverse Approach
     * 1. Reverse all elements in the array
     * 2. Reverse the elements from the index 0 to (k - 1) of the array
     * 3. Reverse the elements from the index k to the end of the array
     */
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
    
private:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            ++start;
            --end;
        }
    }
};
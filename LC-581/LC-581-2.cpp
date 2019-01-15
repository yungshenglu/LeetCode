#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Using Stack
     * 1. Use the stack to find out the starting index of the subarray
     * 2. Use the stack to find out the ending index of the subarray
     * 3. Calculate the length of the subarray
     */
    int findUnsortedSubarray(vector<int>& nums) {
        stack<int> stk;
        int start = nums.size(), end = 0;
        for (int i = 0; i < nums.size(); ++i) {
            while (!stk.empty() && nums[stk.top()] > nums[i]) {
                start = min(start, stk.top());
                stk.pop();
            }
            stk.push(i);
        }
        
        // Clear all elements in the stack
        while (!stk.empty())
            stk.pop();
        
        for (int i = nums.size() - 1; i >= 0; --i) {
            while (!stk.empty() && nums[stk.top()] < nums[i]) {
                end = max(end, stk.top());
                stk.pop();
            }
            stk.push(i);
        }
        return ((end - start < 0) ? 0 : (end - start + 1));
    }
};
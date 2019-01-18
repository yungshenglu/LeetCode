#include <vector>
#include <deque>

using namespace std;

class Solution {    
public:
    /**
     * Concepts: Use Double-ended Queue
     * Use double-ended queue to emulate the rotation
     */
    void rotate(vector<int>& nums, int k) {
        deque<int> dque;
        for (int i = 0; i < nums.size(); ++i)
            dque.push_back(nums[i]);
        k %= nums.size();
        for (int i = 0; i < k; ++i) {
            int temp = dque.back();
            dque.pop_back();
            dque.push_front(temp);
        }
        nums = vector<int>{dque.begin(), dque.end()};
    }
};
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Cyclic Replacements
     * Cyclic replace each the element to the correct position
     */
    void rotate(vector<int>& nums, int k) {
        int count = 0;
        k %= nums.size();
        for (int i = 0; count < nums.size(); ++i) {
            int curr = i, prev = nums[i];
            do {
                int next = (curr + k) % nums.size();
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;
                curr = next;
                ++count;
            } while (i != curr);
        }
    }
};
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Math method: 2 * (a + b + c) - (a + a + b + b + c) = c
     */
    int singleNumber(vector<int>& nums) {
        set<int> all;
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            all.insert(nums[i]);
        }
        
        int setSum = 0;
        for (set<int>::iterator it = all.begin(); it != all.end(); ++it)
            setSum += (*it);
        
        return (2 * setSum - sum);
    }
};
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Approach
     */
    int majorityElement(vector<int>& nums) {
        int majority = nums.size() / 2;
        for (int i = 0; i < nums.size(); ++i) {
            int count = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if (i == j)
                    ++count;
            }
            if (count > majority)
                return i;
        }
        return -1;
    }
};
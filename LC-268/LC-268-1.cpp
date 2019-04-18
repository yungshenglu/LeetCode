#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Use XOR in bit operation to find out the missing bit
     * 1. Suppose the input list is [0, 1, 3, 4]
     * 2. missing = 4 XOR (0 XOR 0) XOR (1 XOR 1) XOR (2 XOR 3) XOR (3 XOR 4)
     *            = (4 XOR 4) XOR (0 XOR 0) XOR (1 XOR 1) XOR (3 XOR 3) XOR 2
     *            = 0 XOR 0 XOR 0 XOR 0 XOR 2
     *            = 2
     */
    int missingNumber(vector<int>& nums) {
        int bit = nums.size();
        for (int i = 0; i < nums.size(); ++i)
            bit ^= nums[i] ^ i;
        return bit;
    }
};
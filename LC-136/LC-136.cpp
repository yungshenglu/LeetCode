#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Use XOR in bit operation to find out the different bit
     * 1. If we take XOR of zero and some bit, it will return that bit
     *     a XOR 0 = a
     * 2. If we take XOR of two same bits, it will return 0
     *     a XOR a = 0
     * 3. Summary
     *     a XOR b XOR a = (a XOR a) XOR b = 0 XOR b = b
     */
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for (int i = 0; i < nums.size(); ++i)
            a ^= nums[i];
        return a;
    }
};
#include <vector>
#include <string>

using namespace std;

class Solution {
    /**
     * Concepts: Bit Manipulation Trick
     * 
     */
public:
    int hammingWeight(uint32_t n) {
        int bitCount = 0;
        while (n > 0) {
            ++bitCount;
            n &= (n - 1);
        }
        return bitCount;
    }
};
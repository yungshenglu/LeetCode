using namespace std;

class Solution {
    /**
     * Concepts: Loop and flips
     * 1. Use AND operation and mask to count the number of bit '1' in loop
     * 2. In each loop, left shift the mask 1 bit
     */
public:
    int hammingWeight(uint32_t n) {
        int bitCount = 0;
        uint32_t mask = 1;
        for (int i = 0; i < 32; ++i) {
            if ((n & mask) != 0)
                ++bitCount;
            mask <<= 1;
        }
        return bitCount;
    }
};
using namespace std;

class Solution {
    /**
     * Concepts: Bit Manipulation Trick
     * 1. Repeatedly flip the least-significant 1-bit of the number to 0, and add 1 to the sum 
     * 2. As soon as the number becomes 0, we know that it does not have any more 1-bits, and we return the sum
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
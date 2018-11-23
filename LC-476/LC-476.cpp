using namespace std;

class Solution {
    /**
     * Concepts: Bit Manipulation
     * 1. Use left-shift operation to find out the mask that can do XOR with the input
     */
public:
    int findComplement(int num) {
        int n = num, mask = 1;
        while (n > 1) {
            n >>= 1;
            mask = (mask << 1) | 1;
        }
        return num ^ mask;
    }
};
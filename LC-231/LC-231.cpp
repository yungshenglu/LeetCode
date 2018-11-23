using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. Repeatedly flip the least-significant 1-bit of the number to 0, and add 1 to the sum 
     * 2. As soon as the number becomes 0, we know that it does not have any more 1-bits, and we return the sum
     */
    bool isPowerOfTwo(int n) {
        if (n > 0)
            return !(n &= (n - 1)) ? true : false;
        return false;
    }
};
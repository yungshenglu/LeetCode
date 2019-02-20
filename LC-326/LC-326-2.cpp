#include <cmath>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Base Changing
     */
    bool isPowerOfThree(int n) {
        if (n < 1)
            return false;
        return (pow(3, int(log2(n) / log2(3))) == n);
    }
};
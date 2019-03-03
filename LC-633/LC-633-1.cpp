#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sqrt Function
     * 1. Use sqrt function and check if \sqrt{c - a^2} turns out to be an integer
     * 2. If it happens for any value of aa in the range [0, \sqrt{c}] we can return a True value immediately
     */
    bool judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; ++a) {
            double b = sqrt(c - a * a);
            if (b == (int)b)
                return true;
        }
        return false;
    }
};
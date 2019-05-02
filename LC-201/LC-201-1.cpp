using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. If m == n, then the result must be the m (or n)
     * 2. Otherwise, only depends on the highest 0 bit in m
     */
    int rangeBitwiseAnd(int m, int n) {
        if (m == n)
            return m;
        
        int p = 0;
        while (m != n) {
            m >>= 1;
            n >>= 1;
            ++p;
        }
        return m << p;
    }
};
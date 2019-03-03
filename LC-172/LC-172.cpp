using namespace std;

class Solution {
public:
    /**
     * Concepts: Math Approach
     */
    int trailingZeroes(int n) {
        int zero = 0;
        while (n > 0)
            zero += (n /= 5);
        return zero;
    }
};
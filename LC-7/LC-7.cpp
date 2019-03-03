#include <climits>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Math Approach
     */ 
    int reverse(int x) {
        if (x == 0)
            return 0;
        long long rev = 0;
        while (x) {
            rev = rev * 10 + x % 10;
            x /= 10;
            if (rev > INT_MAX || rev < INT_MIN)
                return 0;
        }
        return (int)rev;
    }
};
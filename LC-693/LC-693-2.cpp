#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive method using division and modules
     */
    bool hasAlternatingBits(int n) {
        int curr = n % 2;
        n /= 2;
        while (n > 0) {
            if (curr == n % 2)
                return false;
            curr = n % 2;
            n /= 2;
        }
        return true;
    }
};
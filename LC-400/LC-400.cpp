#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    int findNthDigit(int n) {
        long type = 1, num = 9;
        while (n > type * num) {
            n -= (type * num);
            ++type;
            num *= 10;
        }
        int index = (n - 1) / type, digit = (n - 1) % type;
        int nth = pow(10, type - 1) + index;
        return (to_string(nth)[digit] - '0');
    }
};
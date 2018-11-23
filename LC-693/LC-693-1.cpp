#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive method using bit operation
     */
    bool hasAlternatingBits(int n) {
        string bits = to_string(n);
        for (int i = 0; i < bits.length() - 1; ++i) {
            if (bits[i] == bits[i + 1])
                return false;
        }
        return true;
    }
};
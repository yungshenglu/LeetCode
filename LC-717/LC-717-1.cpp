#include <vector>

using namespace std;

class Solution {
    /**
     * Concepts: Increment Pointer
     * 1. If bits[i] is 0, then the next character must have 1 bit
     * 2. If bits[i] is 1, then the next character must have 2 bit
     */
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        while (i < bits.size() - 1)
            i += (bits[i] + 1);
        return (i == bits.size() - 1);
    }
};
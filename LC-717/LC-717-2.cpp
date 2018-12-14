#include <vector>

using namespace std;

class Solution {
    /**
     * Concepts: Greedy Apporach
     * 1. The second-last zero must be the end of the character
     * 2. Only when there are an even number of ones present except the last bit
     */
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = bits.size() - 2;
        while (i >= 0 && bits[i] > 0)
            --i;
        return (bits.size() - i) % 2 == 0;
    }
};
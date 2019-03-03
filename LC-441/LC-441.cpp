#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    int arrangeCoins(int n) {
        int row = 1, stair = 0;
        while (n >= row) {
            n -= row;
            ++row;
            ++stair;
        }
        return stair;
    }
};
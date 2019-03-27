#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     */
    vector<int> countBits(int num) {
        vector<int> counts(num + 1, 0);
        for (int i = 1; i <= num; ++i)
            counts[i] = counts[i & (i - 1)] + 1;
        return counts;
    }
};
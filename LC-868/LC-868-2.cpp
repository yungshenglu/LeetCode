#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: One-pass Approach
     * 1. Store last index of the non-zero bit
     * 2. Iteration:
     *    - If find out non-zero bit, then check whether the gap is greater than current result
     *    - Store the current index of non-zero bit
     */
    int binaryGap(int N) {
        int last = -1, result = 0;
        for (int i = 0; i < 32; ++i) {
            if (((N >> i) & 1) != 0) {
                if (last >= 0)
                    result = max(result, i - last);
                last = i;
            }
        }
        return result;
    }
};
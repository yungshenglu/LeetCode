#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Store Indexes
     * 1. Store the index when the bit is not zero
     * 2. Find out and return the largest gap between two indexes
     */
    int binaryGap(int N) {
        vector<int> indexes(32, 0);
        int j = 0;
        for (int i = 0; i < indexes.size(); ++i) {
            if (((N >> i) & 1) != 0)
                indexes[j++] = i;
        }
        
        int result = 0;
        for (int i = 0; i < j - 1; ++i)
            result = max(result, indexes[i + 1] - indexes[i]);
        return result;
    }
};
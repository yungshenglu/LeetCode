#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two Pointer
     * 1. The first pointer points at the start index of larger group
     * 2. The second pointer points at the end index of larger group
     * 3. Check whether the difference bewteen two index is 3 or more
     */
    vector< vector<int> > largeGroupPositions(string S) {
        vector< vector<int> > positions;
        int start = 0, end = 0;
        for (int i = 1; i < S.length(); ++i) {
            if (S[i] == S[start])
                end = i;
            else {
                if (end - start + 1 >= 3)
                    positions.push_back(vector<int>{start, end});
                start = i;
                end = i;
            }
        }
        // Add the last larger group position
        if (end - start + 1 >= 3)
            positions.push_back(vector<int>{start, end});
        return positions;
    }
};
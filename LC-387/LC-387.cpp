#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two-pass Approach
     */
    int firstUniqChar(string s) {
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); ++i)
            ++count[s[i] - 'a'];
        for (int i = 0; i < s.length(); ++i) {
            if (count[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};
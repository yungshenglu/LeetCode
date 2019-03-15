#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Linear Scanning
     * 1. Compute the length of consecutive group
     * 2. Add the minimum length of the consecutive group
     */
    int countBinarySubstrings(string s) {
        int count = 0, curr = 1, prev = 0;
        for (size_t i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1])
                ++curr;
            else {
                count += min(curr, prev);
                prev = curr;
                curr = 1;
            }
        }
        return (count + min(curr, prev));
    }
};
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. a == b: both two strings are identical, no subsequence will be uncommon
     * 2. length(a) == length(b) && a != b: return length(a) or length(b)
     * 3. length(a) != length(b): return max(length(a), length(b))
     */
    int findLUSlength(string a, string b) {
        if (a == b)
            return -1;
        return max(a.length(), b.length());
    }
};
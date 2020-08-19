#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    bool isSubsequence(string s, string t) {
        int sLen = s.size(), tLen = t.size();
        if (sLen== 0) return true;
        
        int i = 0, j = 0;
        while (i < sLen && j < tLen) {
            if (s[i] == t[j]) {
                if (++i == sLen) return true;
            }
            ++j;
        }
        return (i == sLen);
    }
};
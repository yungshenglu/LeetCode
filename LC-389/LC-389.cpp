#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Find the character from `t` to `s` interatively
     */
    char findTheDifference(string s, string t) {
        for (int i = 0; i < t.length(); ++i) {
            if (s.find(t[i]) == string::npos)
                return t[i];
            s[s.find(t[i])] = NULL;
        }
        return NULL;
    }
};
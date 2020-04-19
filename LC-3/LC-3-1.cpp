#include <string>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     */
    int lengthOfLongestSubstring(string s) {
        int length = s.size(), result = 0;
        for (int i = 0; i < length; ++i) {
            for (int j = i + 1; j <= length; ++j) {
                if (isAllUnique(s, i, j))
                    result = max(result, j - i);
            }
        }
        return result;
    }
    
    bool isAllUnique(string s, int i, int j) {
        set<char> charSet;
        for (int k = i; k < j; ++k) {
            if (charSet.count(s[k]))
                return false;
            charSet.insert(s[k]);
        }
        return true;
    }
};
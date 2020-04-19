#include <string>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sliding window
     * Optimized from method 1
     */
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int length = s.size(), result = 0, start = 0, end = 0;
        while (start < length && end < length) {
            if (!charSet.count(s[end])) {
                charSet.insert(s[end++]);
                result = max(result, end - start);
            }
            else {
                set<char>::iterator it = charSet.find(s[start++]);
                charSet.erase(it);
            }
        }
        return result;
    }
};
#include <string>

using namespace std;

class Solution {
    /**
     * Concepts: Duplicate String
     * 1. If there is such pattern, the original string could be represented as following:
     *    origin = pattern + pattern + ... + pattern =  m * pattern
     * 2. Duplicate the original string
     *    origin + origin = 2 * m * pattern
     * 3. Remove head and rear
     *    new = pattern_wo_head + (2m-2) * pattern + pattern_wo_rear
     * 4. origin(m * pattern) could be found in new_str if m >= 2.
     */
public:
    bool repeatedSubstringPattern(string s) {
        string repeated = s + s;
        if (repeated.substr(1, s.length() * 2 - 2).find(s) != string::npos)
            return true;
        return false;
    }
};
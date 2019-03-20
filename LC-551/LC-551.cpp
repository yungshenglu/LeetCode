#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     * Follow the rule and count the frequency of 'A' (absent) and 'L' (late) respectively
     */
    bool checkRecord(string s) {
        if (s == "")
            return true;
        
        int countA = (s[0] == 'A') ? 1 : 0, countL = (s[0] == 'L') ? 1 : 0;
        for (size_t i = 1; i < s.length(); ++i) {
            if (s[i] == 'A') {
                if (countA == 1)
                    return false;
                ++countA;
            }
            if (s[i] == 'L') {
                if (s[i - 1] == 'L' && countL == 2)
                    return false;
                else if (s[i - 1] != 'L')
                    countL = 0;
                ++countL;
            }
        }
        return true;
    }
};
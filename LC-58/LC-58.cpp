#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */ 
    int lengthOfLastWord(string s) {
        if (s == "")
            return 0;
        
        int length = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] != ' ')
                ++length;
            else {
                if (length != 0)
                    return length;
            }
        }
        return length;
    }
};
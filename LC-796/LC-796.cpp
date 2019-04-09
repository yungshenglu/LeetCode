#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Simple Check
     */
    bool rotateString(string A, string B) {
        if (A.length() != B.length())
            return false;
        
        B += B;
        for (int i = 0; i < B.length() - A.length() + 1; ++i) {
            if (B.substr(i, A.length()) == A)
                return true;
        }
        return false;
    }
};
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    int repeatedStringMatch(string A, string B) {
        int repeat = 1;
        string S = A;
        while (S.length() < B.length()) {
            S += A;
            ++repeat;
        }

        if (S.find(B) != string::npos)
            return repeat;
        
        S += A;
        if (S.find(B) != string::npos)
            return repeat + 1;
        
        return -1;
    }
};
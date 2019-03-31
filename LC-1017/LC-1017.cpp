#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Bitwise Operation
     * Same with convert to base 2
     * 1. bit = N mod 2
     * 2. N /= (-2)
     */
    string baseNeg2(int N) {
        if (N == 0)
            return "0";
        
        string result = "";
        while (N) {
            char ch = '0' + (N & 1);
            result = ch + result;
            N  = -(N >> 1);
        }
        return result;
    }
};
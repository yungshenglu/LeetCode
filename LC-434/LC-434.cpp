#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: In-place
     * It is equivalent to count the number of string indices at which a segment begins. 
     * 1. A string index begins a segment if it is preceded by whitespace (or is the first index) and is not whitespace itself, which can be checked in constant time
     * 2. Return the number of indices for which the condition is satisfied
     */
    int countSegments(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); ++i) {
            if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ')
                ++count;
        }
        return count;
    }
};
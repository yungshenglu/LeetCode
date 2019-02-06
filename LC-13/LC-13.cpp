#include <map>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Appoach
     * 1. Create a map to map each digit to roman character
     * 2. Compute the value of the roman number
     */ 
    int romanToInt(string s) {
        map<char, int> roman {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int result = 0;
        for (int i = 0; i < s.length(); ++i) {
            result += roman[s[i]];
            if (i > 0 && roman[s[i]] > roman[s[i - 1]])
                result -= ( 2 * roman[s[i - 1]]);
        }
        return result;
    }
};
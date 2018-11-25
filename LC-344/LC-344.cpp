#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Naive Approach
     */
    string reverseString(string str) {
        string result = "";
        for (int i = str.length() - 1; i >= 0; --i)
            result += str[i];
        return result;
    }
};
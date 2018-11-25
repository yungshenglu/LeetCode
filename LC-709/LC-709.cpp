#include <string>

using namespace std;

class Solution {
    /**
     * Concepts: 
     * Naive Approach
     */
public:
    string toLowerCase(string str) {
        string result = "";
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                result += ('a' + str[i] - 'A');
            else
                result += str[i];
        }
        return result;
    }
};
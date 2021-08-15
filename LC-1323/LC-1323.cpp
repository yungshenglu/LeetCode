#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Convert integer to string 
     */
    int maximum69Number (int num) {
        string numStr = to_string(num);
        for (int i = 0; i < numStr.length(); ++i) {
            if (numStr[i] == '6') {
                numStr[i] = '9';
                break;
            }
        }
        return stoi(numStr);
    }
};
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string str) {
        string result = "", word = "";
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] != ' ')
                word += str[i];
            else {
                if (word != "") {
                    result += reverse(word);
                    if (i != str.length() - 1)
                        result += " ";
                }
                word = "";
            }
        }
        return result + reverse(word);
    }
private:
    string reverse(string str) {
        string result = "";
        for (int i = str.length() - 1; i >= 0; --i)
            result += str[i];
        return result;
    }
};
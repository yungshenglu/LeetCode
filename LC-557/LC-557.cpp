#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     * 1. Get each word in the string trimming by space
     * 2. Reverse each word and append into the result
     */
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
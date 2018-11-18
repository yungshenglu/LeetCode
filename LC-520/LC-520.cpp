#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. If the first letter is uppercase
     *    a. If the second letter is uppercase, then the following letter should also be uppercase
     *    b. If the second letter is lowercase, then the following letter should also be lowercase
     * 2. If the first letter is lowercase, then the following letter should also be lowercase.
     */
    bool detectCapitalUse(string word) {
        if (word[0] >= 'A' && word[0] <= 'Z') {
            if (word[1] >= 'A' && word[1] <= 'Z') {
                for (int i = 2; i < word.length(); ++i) {
                    if (word[i] < 'A' || word[i] > 'Z')
                        return false;
                }
            }
            else if (word[1] >= 'a' && word[0] <= 'z') {
                for (int i = 2; i < word.length(); ++i) {
                    if (word[i] < 'a' || word[i] > 'z')
                        return false;
                }
            }
        }
        else if (word[0] >= 'a' && word[0] <= 'z') {
            for (int i = 1; i < word.length(); ++i) {
                if (word[i] < 'a' || word[i] > 'z')
                    return false;
            }
        }
        
        return true;
    }
};
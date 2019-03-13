#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Stack
     * 1. Use a stack to store the letters in the input string
     * 2. Pop out the letter to replace the letter in the original string
     */
    string reverseOnlyLetters(string S) {
        stack<char> letters;
        for (int i = 0; i < S.length(); ++i) {
            if ((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z'))
                letters.push(S[i]);
        }
        
        for (int i = 0; i < S.length() && !letters.empty(); ++i) {
            if ((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z')) {
                S[i] = letters.top();
                letters.pop();
            }
        }
        return S;
    }
};
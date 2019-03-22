#include <string>
#include <stack>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Using Stack
     * 1. Create a set to store all vowels both uppercase and lowercase
     * 2. Create a stack to push all vowels in the word
     * 3. Replace the vowels from the stack
     */
    string reverseVowels(string s) {
        set<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
        stack<char> sta;
        for (size_t i = 0; i < s.length(); ++i) {
            if (vowels.find(s[i]) != vowels.end())
                sta.push(s[i]);
        }
        
        for (size_t i = 0; i < s.length(); ++i) {
            if (vowels.find(s[i]) != vowels.end()) {
                s[i] = sta.top();
                sta.pop();
            }
        }
        return s;
    }
};
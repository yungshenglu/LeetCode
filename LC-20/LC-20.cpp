#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Using Stack
     * 1. Create a stack to push all parentheses like '(', '[', and '{'
     * 2. If the character is ')', ']', or '}', check whether the top of slack is '(', '[', '{' respectively
     *    - If yes, pop the stack
     *    - If no, return false
     */ 
    bool isValid(string s) {
        if (s == "")
            return true;
        
        stack<char> parentheses;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                parentheses.push(s[i]);
            else {
                if (!parentheses.empty()) {
                    if (s[i] == ')' && parentheses.top() == '(')
                        parentheses.pop();
                    else if (s[i] == ']' && parentheses.top() == '[')
                        parentheses.pop();
                    else if (s[i] == '}' && parentheses.top() == '{')
                        parentheses.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        return parentheses.empty();
    }
};
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     */
    string longestPalindrome(string s) {
        if (s.length() < 2)
            return s;
        
        int start = 0, maxLen = 1;
        for (int i = 0; i < s.length() - 1; ++i) {
            searchPalindrome(s, i, i, start, maxLen);
            searchPalindrome(s, i, i + 1, start, maxLen);
        }
        return s.substr(start, maxLen);
    }
    
    void searchPalindrome(string s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            --left;
            ++right;
        }
        
        if (right - left - 1 > maxLen) {
            start = left + 1;
            maxLen = right - left - 1;
        }
    }
};
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    string reverseStr(string s, int k) {
        int len = s.length();
        for (int i = 0; i < len; i += 2 * k) {
            int start = i, end = min(i + k - 1, len - 1);
            while (start < end) {
                char ch = s[start];
                s[start++] = s[end];
                s[end--] = ch;
            }
        }
        return s;
    }
};
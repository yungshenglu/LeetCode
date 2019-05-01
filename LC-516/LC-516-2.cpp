#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     */
    int longestPalindromeSubseq(string s) {
        if (s == "")
            return 0;
        
        int n = s.length();
        vector< vector<int> > LPS(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i)
            LPS[i][i] = 1;
        
        for (int len = 1; len <= n; ++len) {
            for (int i = 0; i + len < n; ++i) {
                int j = i + len;
                if (s[i] == s[j])
                    LPS[i][j] = LPS[i + 1][j - 1] + 2;
                else
                    LPS[i][j] = max(LPS[i + 1][j], LPS[i][j - 1]);
            }
        }
        return LPS[0][n - 1];
    }
};
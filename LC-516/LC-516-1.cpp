#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: LCS-like Method
     */
    int longestPalindromeSubseq(string s) {
        if (s == "")
            return 0;
        
        int n = s.length();
        string r = "";
        for (int i = n - 1; i >= 0; --i)
            r += s[i];
        
        vector< vector<int> > LPS(n + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (s[i] == r[j])
                    LPS[i + 1][j + 1] = LPS[i][j] + 1;
                else
                    LPS[i + 1][j + 1] = max(LPS[i + 1][j], LPS[i][j + 1]);
            }
        }
        return LPS[n][n];
    }
};
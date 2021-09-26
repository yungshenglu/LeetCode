#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming (DP)
     * Case Discussion:
     * - s = "aa", p = ".*", isMatch = true
     * - s = "ab", p = ".*", isMatch = true
     * - s = "aab", p = "c*a*b", isMatch = true
     *
     * "a b"  "a * c * b"
     * Algorithm:
     * 1. DP[i][j]: whether s[0-i] and p[0-j] is match
     * 2. s[i] == p[j]: DP[i][j] == DP[i - 1][j - 1]
     * 3. p[j] == ".": DP[i][j] == DP[i - 1][j - 1]
     * 4. p[j] == "*" here are two sub-conditions:
     *    a. p[j - 1] != s[i]: DP[i][j] = DP[i][j - 1] ("a*" counts as empty)
     *    b. p[j - 1] == s[i] OR p[j - 1] == ".":
     *         - DP[i][j] = DP[i][j - 1] ("a*" counts as a single "a")
     *         - DP[i][j] = DP[i - 1][j] ("a*" counts as multiple "a")
     *         - DP[i][j] = DP[i][j - 2] ("a*" counts as empty)
     */
    bool isMatch(string s, string p) {
        if (p.length() == 0 || s.length() == 0) {
            return false;
        }

        // DP[i][j]: whether s[0-i] and p[0-j] is match
        vector< vector<bool> > DP(s.length() + 1, vector<bool>(p.length() + 1, false));
        DP[0][0] = true;
        for (int j = 0; j < p.length(); ++j) {
            if (j > 0 && p[j] == '*' && DP[0][j - 1]) {
                DP[0][j + 1] = true;
            }
        }

        for (int i = 0; i < s.length(); ++i) {
            for (int j = 0; j < p.length(); ++j) {
                if (s[i] == p[j] || p[j] == '.') {
                    DP[i + 1][j + 1] = DP[i][j];
                }
                if (p[j] == '*') {
                    if (p[j - 1] != s[i] && p[j - 1] != '.') {
                        DP[i + 1][j + 1] = DP[i + 1][j - 1];
                    } else {
                        DP[i + 1][j + 1] = (DP[i + 1][j] || DP[i][j + 1] || DP[i + 1][j - 1]);
                    }
                }
            }
        }

        return DP[s.length()][p.length()];
    }
};
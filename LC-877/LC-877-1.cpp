#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     * DP[i][j] = The maximum of stones you can get more than opponent picking piles in piles[i] ~ piles[j]
     * First, you can pick piles[i] or piles[j].
     * 1. If you pick piles[i], your will get more piles[i] - dp[i + 1][j] stones
     * 2. If you pick piles[j], your will get more piles[j] - dp[i][j - 1] stones
     * DP[i][j] = max(piles[i] - dp[i + 1][j], piles[j] - dp[i][j - 1])
     */
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector< vector<int> > DP(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i)
            DP[i][i] = piles[i];
        
        for (int d = 1; d < n; ++d) {
            for (int i = 0; i < n - d; ++i)
                DP[i][i + d] = max(piles[i] - DP[i + 1][i + d], piles[i + d] - DP[i][i + d - 1]);
        }
        return (DP[0][n - 1] > 0);
    }
};
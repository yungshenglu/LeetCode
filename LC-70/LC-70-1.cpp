#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     * Let DP[i] denotes the number of ways to reach on i-th step
     * DP[i] = DP[i - 1] + DP[i - 2]
     */ 
    int climbStairs(int n) {
        if (n == 1)
            return 1;
        vector<int> DP(n + 1);
        DP[1] = 1;
        DP[2] = 2;
        for (int i = 3; i <= n; ++i)
            DP[i] = DP[i - 1] + DP[i - 2];
        return DP[n];
    }
};
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: One-pass Approach
     * Find out the maximum profit in one-pass
     */ 
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for (int i = 0; i < prices.size() - 1; ++i) {
            for (int j = i + 1; j < prices.size(); ++j) {
                int profit = prices[j] - prices[i];
                if (profit > maxProfit)
                    maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
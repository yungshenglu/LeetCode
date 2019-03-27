#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: State Machine
     * Only need to store the profit of 4 time point
     * 1. Buy_1  = max(Buy_1, -prices[i])
     * 2. Sell_1 = max(Sell_1, Buy_1 + prices[i])
     * 3. Buy_2  = max(Buy_2, Sell_1 - prices[i])
     * 4. Sell_2 = max(Sell_2, Buy_2 + prices[i])
     */ 
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
            return 0;
        
        int b1 = -prices[0], s1 = INT_MIN, b2 = INT_MIN, s2 = INT_MIN;
        for (int i = 0; i < prices.size(); ++i) {
            b1 = max(b1, -prices[i]);
            s1 = max(s1, b1 + prices[i]);
            b2 = max(b2, s1 - prices[i]);
            s2 = max(s2, b2 + prices[i]);
        }
        return s2;
    }
};
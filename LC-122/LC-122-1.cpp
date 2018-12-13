#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Peak Valley Approach in One-pass
     * Find out the consecutive valleys and peaks and add into profit
     */ 
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 0; i < prices.size() - 1 && prices.size() > 0; ++i) {
            if (prices[i] < prices[i + 1])
                profit += (prices[i + 1] - prices[i]);
        }
        return profit;
    }
};
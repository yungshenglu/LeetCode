#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Peak Valley Approach
     * Find out the consecutive valleys and peaks and add into profit
     */ 
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 0)
            return 0;
        
        int profit = 0, valley = prices[0], peak = prices[0], i = 0;
        while (i < prices.size() - 1) {
            while (i < prices.size() - 1 && prices[i] >= prices[i + 1])
                ++i;
            valley = prices[i];
            while (i < prices.size() - 1 && prices[i] <= prices[i + 1])
                ++i;
            peak = prices[i];
            profit += (peak - valley);
        }
        return profit;
    }
};
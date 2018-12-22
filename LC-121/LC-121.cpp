#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: One-pass Approach
     * 1. Find out the minimum price in list
     * 2. Find out the maximum profit with the minimum price
     */ 
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxProfit = 0;
        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < minPrice)
                minPrice = prices[i];
            else if (prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
};
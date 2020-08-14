#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: 
     * 1. Get the maximum number of candy
     * 2. Judge whether can be the greatest
     */
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Get the maximum number of candy
        int maxCandy = 0;
        for (int i = 0; i < candies.size(); ++i)
            maxCandy = (candies[i] > maxCandy) ? candies[i] : maxCandy;

        // Get result
        vector<bool> isGreatest(candies.size());
        for (int i = 0; i < candies.size(); ++i)
            isGreatest[i] = (candies[i] + extraCandies >= maxCandy) ? true : false;
        return isGreatest;
    }
};
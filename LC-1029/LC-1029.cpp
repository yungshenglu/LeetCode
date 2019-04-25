#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Partition
     */
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size() / 2, minCost = 0;
        nth_element(costs.begin(), costs.begin() + n, costs.end(), compare);
        for (int i = 0; i < 2 * n; ++i)
            minCost += (i < n) ? costs[i][0] : costs[i][1];
        return minCost;
    }
    
private:
    static bool compare(vector<int> a, vector<int> b) {
        return (a[0] - a[1] < b[0] - b[1]);
    }
};
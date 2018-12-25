#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     * 1. Evaluate backwards in order to decide cost[i] after figuring out cost[i + 1] and cost[i + 2]
     * 2. Let f1 and f2 be the old value of cost[i + 1] and cost[i + 2]
     * 3. Iterate through i backwards and return min(f1, f2)
     */
    int minCostClimbingStairs(vector<int>& cost) {
        int f1 = 0, f2 = 0;
        for (int i = cost.size() - 1; i >= 0; --i) {
            int curr = cost[i] + min(f1, f2);
            f2 = f1;
            f1 = curr;
        }
        return min(f1, f2);
    }
};
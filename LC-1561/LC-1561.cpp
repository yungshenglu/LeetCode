#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     */
    int maxCoins(vector<int>& piles) {
        int pilesLen = piles.size();
        if (pilesLen < 3) return 0;

        sort(piles.begin(), piles.end(), compare);

        int result = 0;
        for (int i = 1; i < 2 * pilesLen / 3; i += 2) {
            result += piles[i];
        }
        return result;
    }

private:
    static bool compare(const int a, const int b) {
        return a > b;
    }
};
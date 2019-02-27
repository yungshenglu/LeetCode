#include <cmath>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     * 1. Consider 0 <= i, j <= logx(bound) < 18
     * 2. Use hash set to make sure the integer is unique
     */
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> powerful;
        for (int i = 0; i < 18 && pow(x, i) <= bound; ++i) {
            for (int j = 0; j < 18 && pow(y, j) <= bound; ++j) {
                int p = pow(x ,i) + pow(y, j);
                if (p <= bound)
                    powerful.insert(p);
            }
        }
        return vector<int>(powerful.begin(), powerful.end());
    }
};
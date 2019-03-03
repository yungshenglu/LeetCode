#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Math Approach
     */
    int reachNumber(int target) {
        target = (target > 0) ? target : -target;
        int k = 0;
        while (target > 0)
            target -= (++k);
        return (target % 2 == 0) ? k : (k + 1 + k % 2);
    }
};
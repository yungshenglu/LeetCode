#include <cstdlib>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    int numberOfSteps (int num) {
        int steps = 0;
        while (num > 0) {
            num = (num % 2) ? num - 1 : num / 2;
            ++steps;
        }
        return steps;
    }
};
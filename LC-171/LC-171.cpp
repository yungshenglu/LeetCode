#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     * Formula: AB = 26 ^ 1 + 2 = 28
     */
    int titleToNumber(string s) {
        int sum = 0, exp = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
            int v = s[i] - 'A' + 1;
            v = v * pow(26, exp++);
            sum += v;
        }
        return sum;
    }
};
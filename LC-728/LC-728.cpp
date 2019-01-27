#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     */
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int n = left; n <= right; ++n) {
            if (selfDividing(n))
                result.push_back(n);
        }
        return result;
    }
    
private:
    bool selfDividing(int num) {
        int x = num;
        while (x) {
            int d = x % 10;
            if (d == 0 || num % d > 0)
                return false;
            x /= 10;
        }
        return true;
    }
};
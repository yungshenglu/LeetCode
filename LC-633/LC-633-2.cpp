#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Binary Search
     */
    bool judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; ++a) {
            long b = c - a * a;
            if (binary_search(0, b, b))
                return true;
        }
        return false;
    }

private:
    bool binary_search(long left, long right, int n) {
        if (left > right)
            return false;
        
        long mid = (left + right) / 2;
        if (mid * mid == n)
            return true;
        else if (mid * mid > n)
            return binary_search(left, mid - 1, n);
        else
            return binary_search(mid + 1, right, n);
    }
};
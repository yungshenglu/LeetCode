#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */ 
    int mySqrt(int x) {
        long n = 1;
        while (n * n <= x)
            ++n;
        return (n - 1);
    }
};
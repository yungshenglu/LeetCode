using namespace std;

class Solution {
public:
    /**
     * Concepts: Fibonacci Number
     * The pattern of this problem is same as Fibonacci number
     */ 
    int climbStairs(int n) {
        if (n == 1)
            return 1;
        int step1 = 1, step2 = 2;
        for (int i = 3; i <= n; ++i) {
            int step3 = step1 + step2;
            step1 = step2;
            step2 = step3;
        }
        return step2;
    }
};
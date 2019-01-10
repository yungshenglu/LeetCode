using namespace std;

class Solution {
public:
    /**
     * Concepts: Iterative Approach
     */
    int fib(int N) {
        if (N < 2) return N;
        int f0 = 0, f1 = 1, f2 = f0 + f1, i = 2;
        while (i < N) {
            f0 = f1;
            f1 = f2;
            f2 = f0 + f1;
            ++i;
        }
        return f2;
    }
};
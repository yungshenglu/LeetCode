using namespace std;

class Solution {
public:
    /**
     * Concepts: Recursive Approach
     */
    int fib(int N) {
        if (N < 2)
            return N;
        else
            return fib(N - 1) + fib(N - 2);
    }
};
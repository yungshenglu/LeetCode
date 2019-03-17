#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Bitwise Operation
     * 1. Count the number of digit in binary
     * 2. Get the 1's complement of the number
     * 3. Use XOR to get the number of digit
     */
    int bitwiseComplement(int N) {
        if (!N)
            return 1;
        
        int d = 0, a = N, result = 0;
        while (a) {
            a /= 2;
            ++d;
        }
        N = (-N - 1);
        for (int i = 0; i < d; ++i)
            N ^= (1 << i);
        return ~N;
    }
};
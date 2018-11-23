using namespace std;

class Solution {
    /**
     * Concepts: Bit Manipulation Trick
     * 1. Use XOR to get the result with different bits between x and y
     * 2. Repeatedly flip the least-significant 1-bit of the number to 0, and add 1 to the sum 
     * 3. As soon as the number becomes 0, we know that it does not have any more 1-bits, and we return the sum
     */
public:
    int hammingDistance(int x, int y) {
        x ^= y;
        int distance = 0;
        while (x > 0) {
            ++distance;
            x &= (x - 1);
        }
        return distance;
    }
};
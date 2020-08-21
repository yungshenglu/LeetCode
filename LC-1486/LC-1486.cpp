class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    int xorOperation(int n, int start) {
        int result = start, end = start + 2 * n;
        for (int i = start + 2; i < end; i += 2) {
            result ^= i;
        }
        return result;
    }
};
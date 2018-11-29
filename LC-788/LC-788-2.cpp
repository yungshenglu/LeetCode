#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Bit-operation Approach
     * 1. Define a valid mask with the 2nd, 5th, 6th, and 9th bits be 1
     * 2. Define an invalid mask with the 3rd, 4th, and 7th bits be 1
     * 3. Check each digit of the number each time and count the result
     *    digit & valid_mask
     *    digit & invalid_mask
     */
    int rotatedDigits(int N) {
        int result = 0;
        for (int i = 1; i <= N; ++i)
            result += isValid(i);
        return result;
    }

private:
    int isValid(int n) {
        const int validMask = (1 << 2) | (1 << 5) | (1 << 6) | (1 << 9);
        const int invalidMask = (1 << 3) | (1 << 4) | (1 << 7);
        
        int valid = 0;
        while (n > 0) {
            int r = 1 << (n % 10);
            if (r & validMask)
                valid = 1;
            else if (r & invalidMask)
                return 0;
            n /= 10;
        }
        return valid;
    }
};
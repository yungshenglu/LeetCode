#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     * 1. Iterate over all permutations (i, j, k, l) of (0, 1, 2, 3)
     *    For each permutation, the time will be A[i]A[j]:A[k]A[l]
     * 2. Check whether the time is valid:
     *    The number of hours = 10 * A[i] + A[j] < 24
     *    The number of minutes = 10 * A[k] + A[l] < 60
     * 3. Output the time in a valid format "XX:XX"
     */
    string largestTimeFromDigits(vector<int>& A) {
        int result = -1;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if (j != i) {
                    for (int k = 0; k < 4; ++k) {
                        if (k != i && k != j) {
                            int l = 6 - i - j - k;
                            int hrs = 10 * A[i] + A[j], mins = 10 * A[k] + A[l];
                            if (hrs < 24 && mins < 60)
                                result = max(result, hrs * 60 + mins);
                        }
                    }
                }
            }
        }

        string digits = "";
        if (result >= 0) {
            digits = to_string(result / 60) + ":";
            if (result / 60 < 10)
                digits = "0" + digits;
            if (result % 60 < 10)
                digits += ("0" + to_string(result % 60));
            else
                digits += to_string(result % 60);
            return digits;
        }
        return "";
    }
};
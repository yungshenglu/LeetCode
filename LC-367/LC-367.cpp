class Solution {
public:
    /**
     * Concepts: Dichotomy
     */
    bool isPerfectSquare(int num) {
        if (num < 1)
            return false;
        else if (num == 1)
            return true;
        else {
            long left = 0, right = num / 2;
            while (left <= right) {
                long mid = (left + right) / 2;
                if (mid * mid == num)
                    return true;
                else if (mid * mid > num)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            return false;
        }
    }
};
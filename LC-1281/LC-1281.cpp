class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    int subtractProductAndSum(int n) {
        int product = 1, digitSum = 0;
        while (n != 0) {
            product *= (n % 10);
            digitSum += (n % 10);
            n /= 10;
        }
        return product - digitSum;
    }
};
using namespace std;

class Solution {
public:
    /**
     * Concepts: Math Approach
     * 1. Only check the divisor from 1 to \sqrt{n}
     * 2. Only add the divisor once if the number has square root
     */
    bool checkPerfectNumber(int num) {
        if (num <= 0)
            return false;
        
        int sum = 0;
        for (int i = 1; i * i <= num; ++i) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num)
                    sum += (num / i);
            }
        }
        return (sum - num == num);
    }
};
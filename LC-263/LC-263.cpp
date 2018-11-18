#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Use iteraitve way to check whether it can be divided by 2, 3, and 5
     */
    bool isUgly(int num) {
        if (num == 1 || num == 2 || num == 3 || num == 5) 
            return true;
        
        int prime[3] = { 2, 3, 5 };
        for (int i = 0; i < 3; ++i) {
            while (num > prime[i] && num % prime[i] == 0) {
                num /= prime[i];
                if (num == 1 || num == 2 || num == 3 || num == 5)
                    return true;
            }
        }
        return false;
    }
};
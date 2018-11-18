#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Use iteraitve way and store each result into set
     */
    bool isHappy(int n) {
        set<int> checkedNum;
        checkedNum.insert(n);
        
        while (n != 1) {
            int sum = 0;
            while (n > 0) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }

            if (checkedNum.find(sum) != checkedNum.end())
                return false;
            
            checkedNum.insert(sum);
            n = sum;
        }
        return true;
    }
};
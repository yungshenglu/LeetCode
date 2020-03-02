#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     * Think of digit-adding in array and consider about carry
     */ 
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0, last = digits.size() - 1;
        if (digits[last] + 1 + carry > 9) {
            digits[last] = (digits[last] + 1 + carry) % 10;
            carry = 1;
            for (int i = digits.size() - 2; i >= 0; --i) {
                if (digits[i] + carry > 9)
                    digits[i] = (digits[i] + carry) % 10;
                else {
                    digits[i] += carry;
                    carry = 0;
                    break;
                }
            }
        }
        else
            digits[last] += (1 + carry);
        
        if (carry != 0)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
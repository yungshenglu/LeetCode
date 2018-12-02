#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. Consider whether the last digit is 9 and add a carry to the previous digit
     * 2. If the carry digit runs all digits, then insert a new digit in front of it
     * 3. Otherwise, just add one into the last digit
     */ 
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size() - 1] == 9) {
            int index = digits.size() - 1;
            while (digits[index] == 9)
                digits[index--] = 0;
            if (index == -1)
                digits.insert(digits.begin(), 1);
            else
                digits[index] += 1;
        }
        else
            digits[digits.size() - 1] += 1;
        return digits;
    }
};
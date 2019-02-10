#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Math Approach
     * 1. Make sure the largest number be num1
     * 2. Insert a '0' in front of num1 for carry
     * 3. Emulate the addition operation and consider the carry bit
     */
    string addStrings(string num1, string num2) {
        if (num1.length() < num2.length()) 
            swap(num1, num2);
        
        num1 = "0" + num1;
        int l1 = num1.length(), l2 = num2.length();
        for (int i = 0; i < l1 - 1; ++i) {
            if (i < l2)
                num1[l1 - i - 1] += (num2[l2 - i - 1] - '0');
            // Carry
            if (num1[l1 - i - 1] > '9') {
                num1[l1 - i - 1] -= 10;
                ++num1[l1 - i - 2];
            }
        }
        return (num1[0] != '0') ? num1 : num1.substr(1);
    }
};
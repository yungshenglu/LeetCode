#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. Determine whether the number is greater than 9
     * 2. Add each digit by division and module
     */
    int addDigits(int num) {
        while (num > 9)
            num = (num / 10) + (num % 10);
        return num;
    }
};
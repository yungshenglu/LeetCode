#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Approach
     * 1. If the number include 3, 4, and 7, it will be invalid
     * 2. The number must include 2, 5, 6, 9; otherwise, the rotated result will be identical with the original
     * 3. Count every valid number in loop
     */
    int rotatedDigits(int N) {
        int result = 0;
        for (int i = 1; i <= N; ++i)
            result += isValid(i);
        return result;
    }

private:
    int isValid(int n) {
        string str1 = to_string(n);
        string str2(str1);
        for (int i = 0; i < str1.length(); ++i) {
            if (str1[i] == '3' || str1[i] == '4' || str1[i] == '7')
                return 0;
            else if (str1[i] == '2')
                str2[i] = '5';
            else if (str1[i] == '5')
                str2[i] = '2';
            else if (str1[i] == '6')
                str2[i] = '9';
            else if (str1[i] == '9')
                str2[i] = '6';
        }
        return (str1 != str2);
    }
};
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Appoach
     * 1. Create a string for the Roman number
     * 2. Transfer two characters of Roman number each time
     * 3. Consider the exception form of 4 and 9 in Roman number
     * 4. Transfer from the lowest digit to highest digit
     */ 
    string intToRoman(int num) {
        const string roman = "MDCLXVI";
        const int romanLength = roman.size();
        const int number[romanLength] = { 1000, 500, 100, 50, 10, 5, 1 };
        
        string result = "";
        for (int i = romanLength - 1; i >= 0; i -= 2) {
            int r = num % 10, key = 0;
            num /= 10;
            if (r == 4) {
                result.insert(0, roman, i - 1, 1);
                result.insert(0, roman, i, 1);
            }
            else if (r == 9) {
                result.insert(0, roman, i - 2, 1);
                result.insert(0, roman, i, 1);
            }
            else {
                r *= pow(10, (romanLength - 1 - i) / 2);
                while (i > 0 && r >= number[i - 1]) {
                    r -= number[i - 1];
                    key = 1;
                }
                while (r >= number[i]) {
                    r -= number[i];
                    result.insert(0, roman, i, 1);
                }
                if (i > 0 && key == 1)
                    result.insert(0, roman, i - 1, 1);
            }
        }
        return result;
    }
};
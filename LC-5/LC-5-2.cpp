#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Manacher's algorithm (DP)
     * 1. Use a useless character to make the length of string be odd
     * 2. Think of the concept of mirror to find the symmetry character for each character
     * 3. Remember to remove the useless character before return the result
     * [Ref] http://www.csie.ntnu.edu.tw/~u91029/Palindrome.html#3
     */
    string longestPalindrome(string s) {
        int strLength = s.length();
        if (s.length() < 2)
            return s;
        
        // Preprocess for Manacher's algorithm
        string ref(2 * strLength + 1, '#');
        for (int i = 0; i < strLength; ++i)
            ref[2 * i + 1] = s[i];
        
        // Manacher's algorithm
        int maxRadius = 1, maxIndex = 1;
        for (int i = 1; i < ref.length() - 1; ++i) {
            int radius = 1;
            while (i - radius >= 0 && i + radius < ref.length() && ref[i - radius] == ref[i + radius])
                ++radius;
            if (radius > maxRadius) {
                maxRadius = radius;
                maxIndex = i;
            }
        }
        --maxRadius;
        
        // Remove the character '#'
        string tmp = ref.substr(maxIndex - maxRadius, maxRadius * 2 + 1);
        string result;
        for (int i = 0; i < tmp.length(); ++i) {
            if (tmp[i] != '#')
                result += tmp[i];
        }
        return result;
    }
};
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Greedy
     * 1. Use map to store the frequency of each character
     * 2. Count the frequency of every character by dividing by 2 and multiply by 2
     *    i.e., length = count / 2 * 2
     * 3. Add 1 more character into the center when the frequency of the character is odd and the current length should me even
     *    (only one odd frequency can insist in palindrome)
     */
    int longestPalindrome(string s) {
        map<char, int> charCount;
        for (int i = 0; i < s.length(); ++i)
            ++charCount[s[i]];
        
        int longest = 0;
        for (map<char, int>::iterator it = charCount.begin(); it != charCount.end(); ++it) {
            longest += it->second / 2 * 2;
            if (it->second % 2 && longest % 2 == 0)
                ++longest;
        }
        return longest;
    }
};
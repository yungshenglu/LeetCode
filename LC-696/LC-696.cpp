#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Group By Character
     * 1. Count the length of each group in the input string
     * 2. Sum up the minimum length of the consecutive group
     */
    int countBinarySubstrings(string s) {
        vector<int> substrLength;
        int len = 1;
        for (size_t i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1])
                ++len;
            else {
                substrLength.push_back(len);
                len = 1;
            }
        }
        substrLength.push_back(len);
        
        // Sum up the minimum of the consecutive length
        int count = 0;
        for (size_t i = 1; i < substrLength.size(); ++i)
            count += min(substrLength[i - 1], substrLength[i]);
        return count;
    }
};
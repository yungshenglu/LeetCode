#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Horizontal Scan
     * 1. Let the first element in the array be the prefix
     * 2. Scan all after the first element in the array by character
     * 3. If there is a different character, resize the prefix
     */ 
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            for (int j = 0; j < prefix.length(); ++j) {
                if (prefix[j] != strs[i][j]) {
                    prefix.resize(j);
                    break;
                }
            }
        }
        return prefix;
    }
};
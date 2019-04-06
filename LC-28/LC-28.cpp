#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Substring
     */ 
    int strStr(string haystack, string needle) {
        if (needle.length() == 0)
            return 0;
        
        for (int i = 0; i < haystack.length(); ++i) {
            if (haystack[i] == needle[0]) {
                string frame = haystack.substr(i, needle.length());
                if (frame == needle)
                    return i;
            }
        }
        return -1;
    }
};
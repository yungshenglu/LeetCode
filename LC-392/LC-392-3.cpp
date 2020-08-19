class Solution {
public:
    /**
     * Concepts: Recursive
     */
    bool isSubsequence(string s, string t) {
        if (s.size() == 0) return true;
        
        int tPtr = t.find(s[0]);
        if (tPtr > -1)
            return isSubsequence(s.substr(1), t.substr(tPtr + 1));
        return false;
    }
};
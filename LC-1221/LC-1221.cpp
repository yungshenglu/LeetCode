class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    int balancedStringSplit(string s) {
        int countR = 0, countL = 0, count = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (countR != 0 && countR == countL) {
                countR = 0;
                countL = 0;
                ++count;
            }
            
            if (s[i] == 'R')
                ++countR;
            else if (s[i] == 'L')
                ++countL;
        }
        
        if (countR == countL) ++count;
        return count;
    }
};
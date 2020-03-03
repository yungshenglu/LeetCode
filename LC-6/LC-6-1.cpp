#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sort by Row
     * 1. Use min(numRows, length(s)) lists to represent the non-empty rows of the Zig-Zag pattern
     * 2. Iterate throught s from left to right, appending each character to the appropriate row
     * 3. The appropriate row can be tracked using: the current row and the current direction
     * 4. The current direction changes only when we moved up to the topmost row or moved down to the bottommost row
     */ 
    string convert(string s, int numRows) {
        if (numRows == 1 || s == "")
            return s;
        
        // Sort by row
        vector<string> rows(min(numRows, int(s.size())));
        int currRow = 0;
        bool goingDown = false;
        for (int i = 0; i < s.size(); ++i) {
            rows[currRow] += s[i];
            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;
            currRow += (goingDown ? 1 : -1);
        }
        
        string zigzag;
        for (int i = 0; i < rows.size(); ++i)
            zigzag += rows[i];
        return zigzag;
    }
};
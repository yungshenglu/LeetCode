#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     */ 
    vector<int> getRow(int rowIndex) {
        vector<int> currRow = { 1 };        
        for (int i = 0; i < rowIndex; ++i) {
            vector<int> prevRow = currRow;
            currRow = { 1 };
            for (int j = 1; j <= i; ++j)
                currRow.push_back(prevRow[j - 1] + prevRow[j]);
            currRow.push_back(1);
        }
        return currRow;
    }
};
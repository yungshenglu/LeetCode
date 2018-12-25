#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     */ 
    vector< vector<int> > generate(int numRows) {
        vector< vector<int> > pascal;
        if (numRows == 0)
            return pascal;
        
        pascal.push_back(vector<int>{ 1 });
        for (int i = 1; i < numRows; ++i) {
            vector<int> prevRow = pascal[i - 1];
            vector<int> row = { 1 };
            for (int j = 1; j < i; ++j)
                row.push_back(prevRow[j - 1] + prevRow[j]);
            row.push_back(1);
            pascal.push_back(row);
        }
        return pascal;
    }
};
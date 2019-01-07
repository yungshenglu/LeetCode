#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     * 1. Check every 3x3 grid individually. 
     *    For each grid, all numbers must be unique and between 1 and 9; plus every row, column, and diagonal must have the same sum
     * 2. Also include an if grid[r+1][c+1] != 5: continue check into our code
     *    (Help us skip over our for r... for c... for loops faster)
     * 3. Observations
     *    - The sum of the grid must be 45, as it is the sum of the distinct values from 1 to 9
     *    - Each horizontal and vertical line must add up to 15, as the sum of 3 of these lines equals the sum of the whole grid
     *    - The diagonal lines must also sum to 15, by definition of the problem statement
     *    - Adding the 12 values from the four lines that cross the center, these 4 lines add up to 60; but they also add up to the entire grid (45), plus 3 times the middle value
     *      This implies the middle value is 5
     */
    int numMagicSquaresInside(vector< vector<int> >& grid) {
        int R = grid.size(), C = grid[0].size(), result = 0;
        for (int i = 0; i < R - 2; ++i) {
            for (int j = 0; j < C - 2; ++j) {
                // Optional check
                if (grid[i + 1][j + 1] != 5)
                    continue;
                if (isMagic(vector<int> {
                    grid[i][j], grid[i][j + 1], grid[i][j + 2],
                    grid[i + 1][j], grid[i + 1][j + 1], grid[i + 1][j + 2],
                    grid[i + 2][j], grid[i + 2][j + 1], grid[i + 2][j + 2]}))
                    ++result;
            }
        }
        return result;
    }

private:
    bool isMagic(vector<int> val) {
        vector<int> count(16, 0);
        for (int i = 0; i < val.size(); ++i)
            ++count[val[i]];
        for (int i = 1; i <= 9; ++i) {
            if (count[i] != 1)
                return false;
        }
        return (val[0] + val[1] + val[2] == 15 &&
               val[3] + val[4] + val[5] == 15 &&
               val[6] + val[7] + val[8] == 15 &&
               val[0] + val[3] + val[6] == 15 &&
               val[1] + val[4] + val[7] == 15 &&
               val[2] + val[5] + val[8] == 15 &&
               val[0] + val[4] + val[8] == 15 &&
               val[2] + val[4] + val[6] == 15);
    }
};
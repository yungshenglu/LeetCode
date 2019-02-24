#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     * 1. Find out the position of rooks
     * 2. Define the walking direction of rooks
     * 3. Follow the rule to find out the pawns that can be captured
     */
    int numRookCaptures(vector< vector<char> >& board) {
        // Get the position of rooks
        int x, y;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (board[i][j] == 'R') {
                    x = i;
                    y = j;
                }
            }
        }
        
        // Define the walking direction of rooks
        vector< vector<int> > direction = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

        // Count the pawns that can be captured
        int capture = 0;
        for (int i = 0; i < 4; ++i) {
            int r = x + direction[i][0], c = y + direction[i][1];
            while (r >= 0 && r < 8 && c >= 0 && c < 8) {                    
                if (board[r][c] == 'p') {
                    ++capture;
                    break;
                }
                else if (board[r][c] == 'B')
                    break;
                r += direction[i][0];
                c += direction[i][1];
            }
        }
        return capture;
    }
};
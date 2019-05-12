#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Intuition
     */
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, dir = 0;
        vector< vector<int> > step = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
        for (int i = 0; i < instructions.length(); ++i) {
            if (instructions[i] == 'G') {
                x += step[dir][0];
                y += step[dir][1];
            }
            else if (instructions[i] == 'L')
                dir = (dir + 1) % 4;
            else if (instructions[i] == 'R') 
                dir = (dir + 3) % 4;
        }
        return (x == 0 && y == 0) || dir > 0;
    }
};
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Iteration
     */
    bool divisorGame(int N) {
        if (N == 1)
            return false;
        
        bool turn = true;
        int x = 1;
        while (N > 1) {
            if (N % x == 0) {
                if (N - x == 1)
                    break;
                N -= x;
                turn = !turn;
                x = 1;
            }
            else
                ++x;
        }
        return turn;
    }
};
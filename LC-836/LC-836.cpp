#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Math Approach
     * Check whether each edge is overlap or not
     */
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return (rec1[2] > rec2[0] &&    // Left
                rec1[3] > rec2[1] &&    // Bottom
                rec1[0] < rec2[2] &&    // Right
                rec1[1] < rec2[3]);     // Top
    }
};
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Square by Square
     * 1. Each cube will has the top and the bottom surface area 2
     * 2. Mask the surface area by the neighbot cube
     * 3. The current will contribute the extra surface area:
     *    max(grid[i][j] - neighbor[i][j], 0)
     */ 
    int surfaceArea(vector< vector<int> >& grid) {
        int area = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid.size(); ++j) {
                if (grid[i][j] > 0) {
                    // For top and bottom 
                    area += 2;
                    // For left/right and front/back
                    for (int k = 0; k < 4; ++k) {
                        int x = i + adjeacnt[k][0];
                        int y = j + adjeacnt[k][1];
                        int v = 0;
                        if (0 <= x && x < grid.size() && 0 <= y && y < grid.size())
                            v = grid[x][y];
                        area += max(grid[i][j] - v, 0);
                    }
                }
            }
        }
        return area;
    }
    
private:
    // Define the mask to the adjacent cube
    int adjeacnt[4][2] = {
        {0, 1}, {1, 0}, {0, -1}, {-1, 0}
    };
};
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     * 1. Simply consider all possible pair of the lines
     * 2. Find out the maximum area out of those
     */
    int maxArea(vector<int>& height) {
        int area = 0;
        for (int i = 0; i < height.size() - 1; ++i) {
            for (int j = i + 1; j < height.size(); ++j)
                area = max(area, min(height[i], height[j]) * (j - i));
        }
        return area;
    }
};
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two Pointers
     * To maximize the area, we need to consider the area between the lines of larger lengths 
     * 1. Take two pointers, one at the beginning and one at the end of the array constituting the length of the lines
     * 2. Maintain a variable max-area to store the maximum area obtained till now
     * 3. At every step, find out the area formed between them, update max-area and move the pointer pointing to the shorter line towards the other end by one step
     */
    int maxArea(vector<int>& height) {
        int area = 0, left = 0, right = height.size() - 1;
        while (left < right) {
            area = max(area, min(height[left], height[right]) * (right - left));
            if (height[left] < height[right])
                ++left;
            else
                --right;
        }
        return area;
    }
};
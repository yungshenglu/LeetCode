#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Left-right Pointer
     * 1. Let the left pointer point at first element and the right pointer point at the last element
     * 2. If the sum of the left and right elements is greater than target, move the right pointer to left
     * 3. If the sum of the left and right elements is lower than target, move the left pointer to right
     * 4. Return the index of the left and the right elements added by 1
     */
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (numbers[left] + numbers[right] != target) {
            if (numbers[left] + numbers[right] > target)
                --right;
            else
                ++left;
        }
        return vector<int>{left + 1, right + 1};
    }
};
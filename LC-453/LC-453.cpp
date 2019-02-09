#include <vector>

using namespace std;

class Solution {
    /**
     * Concepts: Math Approach
     * 1. Assumptions 
     *    S: the sum of the array
     *    n: the length of the array
     *    m: the minimum moves to equal array elements
     *    x: the equal value
     *    t: the minimum element in the array
     * 2. Equations
     *    S + m * (n - 1) = n * x
     *    t + m = x
     *    By the above equations, we will get:
     *    m = S - n * t
     */
public:
    int minMoves(vector<int>& nums) {
        long long int sum = 0;
        int min = nums[0];
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            min = (nums[i] < min) ? nums[i] : min;
        }
        return (sum - nums.size() * min);
    }
};
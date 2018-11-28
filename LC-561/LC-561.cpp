#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. Sort the input numbers in increasing order
     * 2. To get the maximum result, just add the elements as follow:
     *    sum = a1 + a3 + a5 + a7 + ...
     */
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int result = 0;
        for (int i = 0; i < nums.size(); i += 2)
            result += nums[i];
        return result;
    }
};
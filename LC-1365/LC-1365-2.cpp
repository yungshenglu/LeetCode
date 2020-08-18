#include <vector>

#define MAX 101

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     * 1. Create a large array and count the frequency of each number in nums
     * 2. Intuitively, add the count of numbers that lower than itself 
     * 3. Get the count of the smaller number by the count of previous number
     */
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // Count the frequency of each number
        vector<int> DP(MAX + 1, 0);
        for (int i = 0; i < nums.size(); ++i)
            ++DP[nums[i]];
        
        // Add the count of numbers that lower than itself intuitively 
        for (int i = 1; i < MAX; ++i)
            DP[i] += DP[i - 1];
        
        // Get the count of the smaller number by the count of previous number
        vector<int> smallerNumbers;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0)
                smallerNumbers.push_back(0);
            else
                smallerNumbers.push_back(DP[nums[i] - 1]);
        }
        
        return smallerNumbers;
    }
};
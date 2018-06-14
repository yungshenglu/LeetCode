#include <cstdio>
#include <cstring>
#include <iostream>

#define MAX 65536

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // If no number in list, then break
        if (nums.size() == 0)
            return 0;
        
        // Use DP to find LIS
        int LIS[MAX] = { 1 }, length = 1;
        for (int i = 0; i < nums.size(); ++i) {
            int longest = 0;
            for (int j = 0; j < i; ++j) {
                if (nums[j] < nums[i])
                    longest = max(longest, LIS[j]);
            }
            
            LIS[i] = longest + 1;
            length = max(length, LIS[i]);
        }
        
        return length;
    }
};
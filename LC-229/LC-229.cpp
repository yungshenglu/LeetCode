#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Boyer-Moore Majority Vote
     */
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.size() == 0)
            return vector<int>{};
        
        int n1 = NULL, n2 = NULL, count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (n1 != NULL && n1 == nums[i])
                ++count1;
            else if (n2 != NULL && n2 == nums[i])
                ++count2;
            else if (count1 == 0) {
                n1 = nums[i];
                count1 = 1;
            }
            else if (count2 == 0) {
                n2 = nums[i];
                count2 = 1;
            }
            else {
                --count1;
                --count2;
            }
                
        }
        
        count1 = count2 = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == n1)
                ++count1;
            else if (nums[i] == n2)
                ++count2;
        }
        
        vector<int> majority;
        if (count1 > nums.size() / 3)
            majority.push_back(n1);
        if (count2 > nums.size() / 3)
            majority.push_back(n2);
        return majority;
    }
};
class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> RLElist;
        int numsLen = nums.size();
        
        if (numsLen == 0) return RLElist;
        for (int i = 0; i < numsLen - 1; i += 2) {
            int freq = nums[i], val = nums[i + 1];
            while (freq--) {
                RLElist.push_back(val);
            }
        }
        return RLElist;
    }
};
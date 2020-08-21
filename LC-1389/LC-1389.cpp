class Solution {
public:
    /**
     * Concepts: Naive Approach
     * Use vector::insert function
     */
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        vector<int>::iterator it;
        int numsLen = nums.size();
        for (int i = 0; i < numsLen; ++i) {
            it = result.begin() + index[i];
            result.insert(it, nums[i]);
        }
        return result;
    }
};
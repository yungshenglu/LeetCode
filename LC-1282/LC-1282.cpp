class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int groupLen = groupSizes.size();
        vector<vector<int>> group, temp(groupLen + 1);
        for (int i = 0; i < groupLen; ++i) {
            temp[groupSizes[i]].push_back(i);
            if (temp[groupSizes[i]].size() == groupSizes[i]) {
                group.push_back(temp[groupSizes[i]]);
                temp[groupSizes[i]].clear();
            }
        }
        return group;
    }
};
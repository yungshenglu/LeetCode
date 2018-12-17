#include <vector>
#include <map>
#include <climits>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach with Hash
     * 1. Traverse all elements in the list and record the start index, the end index, and the count
     * 2. In the shortest length of the subarray, the start and the end element should be the element with highest count
     */
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> count, start, end;
        int maxCount = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (start.count(nums[i]) == 0) {
                start[nums[i]] = i;
                count[nums[i]] = 0;
            }
            ++count[nums[i]];
            end[nums[i]] = i;
            maxCount = max(maxCount, count[nums[i]]);
        }
        
        // Find out the shortest length of thw subarray with same degree with original list
        int result = INT_MAX;
        for (map<int, int>::iterator it = count.begin(); it != count.end(); ++it) {
            if (it->second == maxCount)
                result = min(result, end[it->first] - start[it->first] + 1);
        }
        return result;
    }
};
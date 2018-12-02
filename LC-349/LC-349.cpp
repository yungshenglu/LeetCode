#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Use "std::set_intersection" to find out the intersection of two sets
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(max(nums1.size(), nums2.size()));
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int>::iterator it = set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), result.begin());
        result.resize(it - result.begin());
        set<int> result_set(result.begin(), result.end());

        return vector<int>(result_set.begin(), result_set.end());
    }
};
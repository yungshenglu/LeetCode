#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Merging and Sorting
     * 1. Merge two arrays into one array
     * 2. Sorting
     * 3. Return median of merged array
     */
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int nums2Len = nums2.size();
        for (int i = 0; i < nums2Len; ++i) {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        int nums1Len = nums1.size();
        if (nums1Len % 2 == 0) {
            double a = nums1[nums1Len / 2 - 1];
            double b = nums1[nums1Len / 2];
            return (a + b) / 2;
        }
        return nums1[nums1Len / 2];
    }
};
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Three-Pointer
     * 1. Let pointer1 be at the index m in nums1
     *    Let pointer2 be at the index n in nums2
     *    Let pointer3 be at the index of the last element in nums1
     * 2. Iteration
     *    - Compare each element between nums1 and nums2 from the largest to the lowest
     *    - Merge the greastest element into the place pointer3 and decrease the value of pointer3
     *    - Decrease the value of the pointer with the greatest value each iteration
     */ 
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lastNum1 = m - 1, lastNum2 = n - 1, last = nums1.size() - 1;
        while (lastNum1 >= 0 && lastNum2 >= 0) {
            if (nums1[lastNum1] > nums2[lastNum2]) {
                nums1[last] = nums1[lastNum1];
                --lastNum1;
                --last;
            }
            else {
                nums1[last] = nums2[lastNum2];
                --lastNum2;
                --last;
            }
        }
        while (lastNum2 >= 0) {
            nums1[last] = nums2[lastNum2];
            --lastNum2;
            --last;
        }
    }
};
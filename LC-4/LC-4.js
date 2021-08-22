/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */

var findMedianSortedArrays = function(nums1, nums2) {
  /**
   * Concepts: Merging and Sorting
   * 1. Merge two arrays into one array
   * 2. Sorting
   * 3. Return median of merged array
   */
  const nums2Len = nums2.length;
  nums1 = nums1.concat(nums2);
  nums1 = nums1.sort((a, b) => a - b);

  const nums1Len = nums1.length;
  if (nums1Len % 2 === 0) {
      return (nums1[Math.floor(nums1Len / 2) - 1] + nums1[Math.floor(nums1Len / 2)]) / 2;
  }
  return nums1[Math.floor(nums1Len / 2)];
};
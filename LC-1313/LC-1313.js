/**
 * @param {number[]} nums
 * @return {number[]}
 */
var decompressRLElist = function (nums) {
  /**
   * Concepts: Naive Approach
   */

  if (nums.length === 0) return []

  let RLElist = []
  for (let i = 0; i < nums.length - 1; i += 2) {
    while (nums[i]--) {
      RLElist.push(nums[i + 1])
    }
  }
  return RLElist
}

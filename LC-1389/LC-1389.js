/**
 * @param {number[]} nums
 * @param {number[]} index
 * @return {number[]}
 */
var createTargetArray = function (nums, index) {
  /**
   * Concepts: Naive Approach
   * Use Array.prototype.splice function
   */

  let result = [],
    numsLen = nums.length
  for (let i = 0; i < numsLen; ++i) {
    result.splice(index[i], 0, nums[i])
  }
  return result
}

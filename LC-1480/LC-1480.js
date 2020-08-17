/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function (nums) {
  /**
   * Concepts: Get the sum from previous sum and current number
   */

  let sums = [nums[0]]
  for (let i = 1; i < nums.length; ++i) {
    sums[i] = sums[i - 1] + nums[i]
  }
  return sums
}

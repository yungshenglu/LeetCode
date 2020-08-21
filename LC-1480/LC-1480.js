/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function (nums) {
  /**
   * Concepts: Get the sum from previous sum and current number
   */
  if (nums.length === 0) return []

  let sums = [nums[0]]
  for (let i = 1; i < nums.length; ++i) {
    sums.push(sums[i - 1] + nums[i])
  }
  return sums
}

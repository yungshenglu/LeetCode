/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function (nums) {
  /**
   * Concepts: Stringify
   */

  let evenDigitNum = 0,
    numsLen = nums.length
  for (let i = 0; i < numsLen; ++i) {
    let numStr = String(nums[i])
    if (numStr.length % 2 === 0) ++evenDigitNum
  }
  return evenDigitNum
}

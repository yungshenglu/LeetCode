/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function (nums) {
  /**
   * Concepts: Naive Approach
   */

  let smallerNumbers = Array(nums.length).fill(0)
  for (let i = 0; i < nums.length; ++i) {
    for (let j = 0; j < nums.length; ++j) {
      if (i !== j && nums[j] < nums[i]) ++smallerNumbers[i]
    }
  }
  return smallerNumbers
}

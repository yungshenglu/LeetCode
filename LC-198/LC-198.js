/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function (nums) {
  /**
   * Concepts: Dynamic Programming
   * 1. Get the value of index 0 and 1 in the array
   * 2. Current maximum money = max(money[i - 2] + money[i], money[i - 1])
   */
  if (nums.length === 0) return 0
  if (nums.length === 1) return nums[0]

  let prev = nums[0],
    curr = Math.max(nums[0], nums[1])
  for (let i = 2; i < nums.length; ++i) {
    let temp = curr
    curr = Math.max(prev + nums[i], curr)
    prev = temp
  }
  return curr
}

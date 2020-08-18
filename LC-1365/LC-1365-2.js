/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function (nums) {
  /**
   * Concepts: Dynamic Programming
   * 1. Create a large array and count the frequency of each number in nums
   * 2. Intuitively, add the count of numbers that lower than itself
   * 3. Get the count of the smaller number by the count of previous number
   */

  // Count the frequency of each number
  let DP = Array(101).fill(0)
  for (let i = 0; i < nums.length; ++i) {
    ++DP[nums[i]]
  }

  // Add the count of numbers that lower than itself intuitively
  for (let i = 1; i <= 100; ++i) {
    DP[i] += DP[i - 1]
  }

  // Get the count of the smaller number by the count of previous number
  let smallerNumbers = []
  for (let i = 0; i < nums.length; ++i) {
    if (nums[i] === 0) {
      smallerNumbers.push(0)
    } else {
      smallerNumbers.push(DP[nums[i] - 1])
    }
  }

  return smallerNumbers
}

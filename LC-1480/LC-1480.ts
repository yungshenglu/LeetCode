/**
 * Concepts: Get the sum from previous sum and current number
 */

function runningSum(nums: number[]): number[] {
  if (nums.length === 0) return []

  let sums: number[] = [nums[0]]
  for (let i: number = 1; i < nums.length; ++i) {
    sums.push(sums[i - 1] + nums[i])
  }
  return sums
}

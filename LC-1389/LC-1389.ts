/**
 * Concepts: Naive Approach
 * Use Array.prototype.splice function
 */

function createTargetArray(nums: number[], index: number[]): number[] {
  let result: number[] = [],
    numsLen = nums.length
  for (let i: number = 0; i < numsLen; ++i) {
    result.splice(index[i], 0, nums[i])
  }
  return result
}

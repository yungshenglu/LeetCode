/**
 * Concepts: Naive Approach
 */

function decompressRLElist(nums: number[]): number[] {
  let numsLen: number = nums.length
  if (numsLen === 0) return []

  let RLElist: number[] = []
  for (let i: number = 0; i < numsLen - 1; i += 2) {
    while (nums[i]--) {
      RLElist.push(nums[i + 1])
    }
  }
  return RLElist
}

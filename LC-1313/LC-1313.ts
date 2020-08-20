/**
 * Concepts: Naive Approach
 */

function decompressRLElist(nums: number[]): number[] {
  if (nums.length === 0) return []

  let RLElist: number[] = []
  for (let i: number = 0; i < nums.length - 1; i += 2) {
    while (nums[i]--) {
      RLElist.push(nums[i + 1])
    }
  }
  return RLElist
}

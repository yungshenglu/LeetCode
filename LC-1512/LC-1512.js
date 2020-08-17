/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function (nums) {
  let count = {}
  for (let i = 0; i < nums.length; ++i) {
    count[nums[i]] = (count[nums[i]] || 0) + 1
  }

  let pairCount = 0
  for (let [key, val] of Object.entries(count)) {
    if (val > 2) {
      pairCount += (val * (val - 1)) / 2
    } else if (val === 2) {
      pairCount += 1
    }
  }
  return pairCount
}

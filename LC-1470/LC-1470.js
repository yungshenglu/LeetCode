/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function (nums, n) {
  let result = [];
  for (
    let i = 0, j = n, k = 0;
    i < n && j < 2 * n && k < 2 * n;
    ++i, ++j, k += 2
  ) {
    result[k] = nums[i];
    result[k + 1] = nums[j];
  }
  return result;
};

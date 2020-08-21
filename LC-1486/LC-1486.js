/**
 * @param {number} n
 * @param {number} start
 * @return {number}
 */
var xorOperation = function (n, start) {
  /**
   * Concepts: Naive Approach
   */

  let result = start,
    end = start + 2 * n
  for (let i = start + 2; i < end; i += 2) {
    result ^= i
  }
  return result
}

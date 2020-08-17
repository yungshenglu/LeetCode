/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function (num) {
  /**
   * Concepts: Naive Approach
   */

  let steps = 0
  while (num > 0) {
    num = num % 2 ? num - 1 : num / 2
    ++steps
  }
  return steps
}

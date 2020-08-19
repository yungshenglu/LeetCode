/**
 * @param {number[]} cost
 * @return {number}
 */
var minCostClimbingStairs = function (cost) {
  /**
   * Concepts: Dynamic Programming
   * 1. Evaluate backwards in order to decide cost[i] after figuring out cost[i + 1] and cost[i + 2]
   * 2. Let f1 and f2 be the old value of cost[i + 1] and cost[i + 2]
   * 3. Iterate through i backwards and return min(f1, f2)
   */

  let f1 = 0,
    f2 = 0
  for (let i = cost.length - 1; i >= 0; --i) {
    let curr = cost[i] + Math.min(f1, f2)
    f2 = f1
    f1 = curr
  }
  return Math.min(f1, f2)
}

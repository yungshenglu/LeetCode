/**
 * Concepts: Dynamic Programming
 * 1. Evaluate backwards in order to decide cost[i] after figuring out cost[i + 1] and cost[i + 2]
 * 2. Let f1 and f2 be the old value of cost[i + 1] and cost[i + 2]
 * 3. Iterate through i backwards and return min(f1, f2)
 */

function minCostClimbingStairs(cost: number[]): number {
  let f1: number = 0,
    f2: number = 0
  for (let i: number = cost.length - 1; i >= 0; --i) {
    let curr: number = cost[i] + Math.min(f1, f2)
    f2 = f1
    f1 = curr
  }
  return Math.min(f1, f2)
}

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

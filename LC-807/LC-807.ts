/**
 * Concepts: Row and Column Maximum
 */

function maxIncreaseKeepingSkyline(grid: number[][]): number {
  let n: number = grid.length
  let skylineRow: number[] = Array(n).fill(-1),
    skylineCol: number[] = Array(n).fill(-1)
  for (let i: number = 0; i < n; ++i) {
    for (let j: number = 0; j < n; ++j) {
      skylineRow[i] = Math.max(skylineRow[i], grid[i][j])
      skylineCol[i] = Math.max(skylineCol[i], grid[j][i])
    }
  }

  let maxIncrease: number = 0
  for (let i: number = 0; i < n; ++i) {
    for (let j: number = 0; j < n; ++j) {
      maxIncrease += Math.min(skylineRow[i], skylineCol[j]) - grid[i][j]
    }
  }
  return maxIncrease
}

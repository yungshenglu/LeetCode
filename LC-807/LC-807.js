/**
 * @param {number[][]} grid
 * @return {number}
 */
var maxIncreaseKeepingSkyline = function (grid) {
  /**
   * Concepts: Row and Column Maximum
   */

  let n = grid.length
  let skylineRow = Array(n).fill(-1),
    skylineCol = Array(n).fill(-1)
  for (let i = 0; i < n; ++i) {
    for (let j = 0; j < n; ++j) {
      skylineRow[i] = Math.max(skylineRow[i], grid[i][j])
      skylineCol[i] = Math.max(skylineCol[i], grid[j][i])
    }
  }

  let maxIncrease = 0
  for (let i = 0; i < n; ++i) {
    for (let j = 0; j < n; ++j) {
      maxIncrease += Math.min(skylineRow[i], skylineCol[j]) - grid[i][j]
    }
  }
  return maxIncrease
}

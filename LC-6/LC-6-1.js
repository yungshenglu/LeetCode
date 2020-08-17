/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */

var convert = function (s, numRows) {
  /**
   * Concepts: Sort by Row
   * 1. Use min(numRows, length(s)) lists to represent the non-empty rows of the Zig-Zag pattern
   * 2. Iterate throught s from left to right, appending each character to the appropriate row
   * 3. The appropriate row can be tracked using: the current row and the current direction
   * 4. The current direction changes only when we moved up to the topmost row or moved down to the bottommost row
   */

  if (numRows === 1 || s === '') {
    return s
  }

  // Sort by row
  let rows = new Array(Math.min(numRows, s.length)).fill('')
  let currRow = 0,
    goingDown = false
  for (let i = 0; i < s.length; ++i) {
    rows[currRow] = rows[currRow].concat(s[i])
    if (currRow === 0 || currRow === numRows - 1) {
      goingDown = !goingDown
    }
    currRow += goingDown ? 1 : -1
  }

  let zigzag = ''
  for (let i = 0; i < rows.length; ++i) {
    zigzag += rows[i]
  }
  return zigzag
}

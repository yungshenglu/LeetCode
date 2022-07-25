/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
  /**
   * Concepts:
   * 1. Get the index of row and column that should be zero in matrix
   * 2. Set the element that should be zero
   */

  let zeroRowIndex = new Set();
  let zeroColIndex = new Set();

  for (let i = 0; i < matrix.length; ++i) {
      for (let j = 0; j < matrix[i].length; ++j) {
          if (matrix[i][j] === 0) {
              zeroRowIndex.add(i);
              zeroColIndex.add(j);
          }
      }
  }

  for (let i = 0; i < matrix.length; ++i) {
      for (let j = 0; j < matrix[i].length; ++j) {
          if (zeroRowIndex.has(i) || zeroColIndex.has(j)) {
              matrix[i][j] = 0;
          }
      }
  }

  return matrix;
};

/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function (s, indices) {
  /**
   * Concepts: Sorting Pair-Vector
   * 1. Use pair-vector to store each character and it's index
   * 2. Sorting and concatenate to new string
   */

  let pairs = []
  for (let i = 0; i < indices.length; ++i) {
    pairs.push({
      ch: s[i],
      idx: indices[i]
    })
  }

  // Sorting
  pairs.sort((a, b) => a['idx'] - b['idx'])

  // Concatenation
  let result = ''
  for (let i = 0; i < pairs.length; ++i) {
    result += pairs[i]['ch']
  }
  return result
}

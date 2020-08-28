/**
 * @param {number[]} piles
 * @return {number}
 */
var maxCoins = function (piles) {
  /**
   * Concepts: Sorting
   */

  let pilesLen = piles.length
  if (pilesLen < 3) return 0

  piles.sort((a, b) => b - a)

  let result = 0
  for (let i = 1; i < (2 * pilesLen) / 3; i += 2) {
    result += piles[i]
  }
  return result
}

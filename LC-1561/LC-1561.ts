/**
 * Concepts: Sorting
 */

function maxCoins(piles: number[]): number {
  let pilesLen: number = piles.length
  if (pilesLen < 3) return 0

  piles.sort((a, b) => b - a)

  let result: number = 0
  for (let i: number = 1; i < (2 * pilesLen) / 3; i += 2) {
    result += piles[i]
  }
  return result
}

/**
 * @param {number[]} rating
 * @return {number}
 */
var numTeams = function (rating) {
  /**
   * Concepts: Brute Force
   */

  let rateLen = rating.length,
    teams = 0
  teams += bruteForce(rateLen, rating)
  rating = rating.reverse()
  teams += bruteForce(rateLen, rating)
  return teams
}

var bruteForce = function (n, rating) {
  let count = 0
  for (let i = 0; i < n - 2; ++i) {
    for (let j = i + 1; j < n - 1; ++j) {
      if (rating[i] < rating[j]) {
        for (let k = j + 1; k < n; ++k) {
          if (rating[j] < rating[k]) {
            ++count
          }
        }
      }
    }
  }
  return count
}

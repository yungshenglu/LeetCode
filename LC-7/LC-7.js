/**
 * @param {number} x
 * @return {number}
 */

const INT_MAX = 2147483647,
  INT_MIN = -2147483647 - 1

var reverse = function (x) {
  /**
   * Concepts: Math Approach
   */

  if (x === 0) {
    return 0
  }

  let rev = 0
  while (x) {
    rev = rev * 10 + parseInt(x % 10)
    x = parseInt(x / 10)
    if (rev > INT_MAX || rev < INT_MIN) {
      return 0
    }
  }
  return parseInt(rev)
}

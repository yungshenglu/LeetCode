/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function (n) {
  /**
   * Naive Approachs
   */
  let num = String(n),
    product = 1,
    digitSum = 0

  for (let i = 0; i < num.length; ++i) {
    product *= num[i] - '0'
    digitSum += num[i] - '0'
  }

  return product - digitSum
}

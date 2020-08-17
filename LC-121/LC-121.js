/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  /**
   * Concepts: One-pass Approach
   * 1. Find out the minimum price in list
   * 2. Find out the maximum profit with the minimum price
   */

  let minPrice = Number.MAX_SAFE_INTEGER,
    maxProfit = 0
  for (let i = 0; i < prices.length; ++i) {
    if (prices[i] < minPrice) {
      minPrice = prices[i]
    } else if (prices[i] - minPrice > maxProfit) {
      maxProfit = prices[i] - minPrice
    }
  }
  return maxProfit
}

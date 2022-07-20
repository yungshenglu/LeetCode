/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
  /**
   * Concepts:
   * Optimize naive approach
   */

  let result = [];
  for (let i = 1; i <= n; ++i) {
    let temp = '';
    if (i % 3 === 0) {
      temp += 'Fizz';
    }
    if (i % 5 === 0) {
      temp += 'Buzz';
    }
    result.push(temp ? temp : String(i));
  }
  return result;
};

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function (s, t) {
  /**
   * Concepts: Recursive
   */

  if (s.length == 0) return true

  let tPtr = t.indexOf(s[0])
  if (tPtr > -1) return isSubsequence(s.substr(1), t.substr(tPtr + 1))
  return false
}

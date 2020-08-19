/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function (s, t) {
  /**
   * Concepts: Naive Approach
   */
  let sLen = s.length,
    tLen = t.length
  if (sLen === 0) return true

  let i = 0,
    j = 0
  while (i < sLen && j < tLen) {
    if (s[i] === t[j]) {
      if (++i === sLen) return true
    }
    ++j
  }
  return i === sLen
}

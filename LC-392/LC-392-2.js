/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function (s, t) {
  /**
   * Concepts: Use stack
   * 1. Push all character s into stack
   * 2. Pop up the stack if character is matching in top of stack in reverse order
   * 3. s is subsequence when stack is empty
   */

  let sLen = s.length,
    tLen = t.length
  if (sLen == 0) return true

  let stack = []
  for (let i = 0; i < sLen; ++i) stack.push(s[i])

  for (let i = tLen - 1; i >= 0; --i) {
    if (t[i] == stack[stack.length - 1]) stack.pop()
    if (stack.length === 0) return true
  }
  return stack.length === 0
}

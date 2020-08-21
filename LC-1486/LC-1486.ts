/**
 * Concepts: Naive Approach
 */

function xorOperation(n: number, start: number): number {
  let result: number = start,
    end: number = start + 2 * n
  for (let i: number = start + 2; i < end; i += 2) {
    result ^= i
  }
  return result
}

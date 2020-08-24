interface Provider {
  ch: string
  idx: number
}

function restoreString(s: string, indices: number[]): string {
  /**
   * Concepts: Sorting Pair-Vector
   * 1. Use pair-vector to store each character and it's index
   * 2. Sorting and concatenate to new string
   */

  let pairs: Array<Provider> = [],
    indicesLen: number = indices.length
  for (let i: number = 0; i < indicesLen; ++i) {
    pairs.push({
      ch: s[i],
      idx: indices[i]
    })
  }

  // Sorting
  pairs.sort((a: any, b: any) => a.idx - b.idx)

  // Concatenation
  let result: string = '',
    pairsLen = pairs.length
  for (let i: number = 0; i < pairsLen; ++i) {
    result += pairs[i].ch
  }
  return result
}

/**
 * Concepts: Naive Approach
 */

function groupThePeople(groupSizes: number[]): number[][] {
  let groupLen: number = groupSizes.length
  let group: [][] = [],
    temp = new Array(groupLen + 1)

  for (let i = 0; i < temp.length; ++i) {
    temp[i] = []
  }

  for (let i = 0; i < groupLen; ++i) {
    temp[groupSizes[i]].push(i)
    if (temp[groupSizes[i]].length === groupSizes[i]) {
      group.push(temp[groupSizes[i]])
      temp[groupSizes[i]] = []
    }
  }
  return group
}

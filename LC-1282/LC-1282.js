/**
 * @param {number[]} groupSizes
 * @return {number[][]}
 */
var groupThePeople = function (groupSizes) {
  /**
   * Concepts: Naive Approach
   */

  let groupLen = groupSizes.length
  let group = [],
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

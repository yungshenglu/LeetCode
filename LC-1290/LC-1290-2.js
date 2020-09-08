/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

/**
 * @param {ListNode} head
 * @return {number}
 */
var getDecimalValue = function (head) {
  /**
   * Concepts: Iterative
   */

  if (head.next === null) return head.val

  let size = 0,
    temp = head
  while (temp !== null) {
    ++size
    temp = temp.next
  }

  --size
  temp = head

  let value = 0
  while (temp != null) {
    if (temp.val) {
      value += Math.pow(2, size)
    }
    --size
    temp = temp.next
  }
  return value
}

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
     * Concepts: Arithmetic Approach
     * Formula: num = num * 2 + x
     */
    
    let val = 0, curr = head;
    while (curr !== null) {
        val = val << 1 | curr.val;
        curr = curr.next
    }
    return val;
};
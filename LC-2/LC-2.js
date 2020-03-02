/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */

var addTwoNumbers = function(l1, l2) {
    /**
     * Concepts:
     * Append the result of the sum of each digit at the end of list and notice the carry
     */
    
    if (l1 == null || l2 == null) {
        return {};
    }
    
    let curr1 = l1, curr2 = l2;
    let result = new ListNode(null), head = result;
    let carry = 0;
    
    while (curr1 != null || curr2 != null) {
        let sum = 0;
        if (curr1 == null && curr2 != null) {
            sum = curr2.val + carry;
        } else if (curr2 == null && curr1 != null) {
            sum = curr1.val + carry;
        } else {
            sum = curr1.val + curr2.val + carry;
        }
        
        carry = Math.floor(sum / 10);
        let node = new ListNode(sum % 10);
        head.next = node;
        head = head.next;
        curr1 = (curr1 == null) ? null : curr1.next;
        curr2 = (curr2 == null) ? null : curr2.next;
    }
    
    // Append the last carry at the end of list
    if (carry !== 0) {
        let node = new ListNode(carry);
        head.next = node;
    }
    
    return result.next;
};
/**
 * Definition for singly-linked list.
 */
class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val===undefined ? 0 : val)
        this.next = (next===undefined ? null : next)
    }
}

/**
 * Concepts: Arithmetic Approach
 * Formula: num = num * 2 + x
 */
function getDecimalValue(head: ListNode | null): number {
    let val:number = 0;
    let curr: ListNode | null = head;
    while (curr != null) {
        val = val * 2 + curr.val;
        curr = curr.next;
    }
    return val;
};
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    '''
    Concepts: Recursion
    1. Declare a recursive function to find the removed node and remove
        - When find out the removed node, make the previous node points to the next of the removed node
        - Return the index of each node in the list
    2. If the index is lower than the target, which means the head node should be removed
    '''
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        def removeNode(node, n):
            if node == None:
                return -1
            index = removeNode(node.next, n) + 1
            if index == n:
                node.next = node.next.next
            return index

        index = removeNode(head, n)
        if n > index:
            head = head.next
        return head

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * Concepts:
     * Use recursive way to reverse each node in the linked list
     */ 
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* curr = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return curr;
    }
};
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
     * Use iteraitve way to add the node in front of the reversed list
     */
    ListNode* reverseList(ListNode* head) {
        ListNode* reverse = NULL;
        ListNode* curr = head;
        
        while (curr != NULL) {
            ListNode* prev = curr;
            curr = curr->next;
            prev->next = reverse;
            reverse = prev;
        }
        
        return reverse;
    }
};
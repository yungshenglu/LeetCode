using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /**
     * Concepts: Naive Approach
     * 1. Compare whether the value of current node and the next of current node is same or not
     * 2. Consider the input linked-list may be NULL
     */ 
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return NULL;
        
        ListNode *curr = head;
        while (curr != NULL && curr->next != NULL) {
            if (curr->val == curr->next->val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return head;
    }
};
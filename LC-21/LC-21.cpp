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
     * Concepts:
     * 1. Compare the value of two node and insert the smaller one into result
     * 2. If one list has already inserted into result, then insert all remain nodes of the other list into result
     */ 
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* sortedList = new ListNode(NULL);
        ListNode* curr = sortedList;
        
        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            }
            else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        
        if (l1 == NULL && l2 != NULL)
            curr->next = l2;
        else if (l2 == NULL && l1 != NULL)
            curr->next = l1;
        return sortedList->next;
    }
};
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
     * Append the result of the sum of each digit at the end of list and notice the carry
     */
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *curr1 = l1, *curr2 = l2;
        ListNode *result = new ListNode(NULL), *head = result;
        int carry = 0;

        while (curr1 != NULL || curr2 != NULL) {
            int sum = 0;
            if (curr1 == NULL && curr2 != NULL)
                sum = curr2->val + carry;
            else if (curr2 == NULL && curr1 != NULL)
                sum = curr1->val + carry;
            else
                sum = curr1->val + curr2->val + carry;
            
            carry = sum / 10;
            ListNode *node = new ListNode(sum % 10);
            
            head->next = node;
            head = head->next;
            curr1 = (curr1 == NULL) ? NULL : curr1->next;
            curr2 = (curr2 == NULL) ? NULL : curr2->next;  
        }
        
        // Append the last carry at the end of list
        if (carry != 0) {
            ListNode *node = new ListNode(carry);
            head->next = node;
        }
        
        return result->next;
    }
};
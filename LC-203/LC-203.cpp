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
     * 1. Create an fake node and add in front of the head
     * 2. Find out the value of node is identical to the input value and remove it
     * 3. Consider whether the node with the same value is the first node in the list 
     */
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
            return NULL;
        else if (head->val == val) {
            head = head->next;
            if (head == NULL)
                return NULL;
        }
        
        ListNode *node = new ListNode(NULL), *prev = node;
        node->next = head;
        while (head != NULL) {
            if (head->val == val) {
                prev->next = head->next;
                head = head->next;
            }
            else {
                prev = head;
                head = head->next;
            }
        }
        return node->next;
    }
};
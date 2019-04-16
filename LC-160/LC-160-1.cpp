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
     * Concepts: Compare Length
     * 1. Compute the length from two different head to the end
     * 2. The difference between two length is the number of node that the long list need to skip
     * 3. Let the long list skip the difference
     * 4. Compare each node between short list and long list
     */
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        
        int length = 0;
        while (a != NULL) {
            ++length;
            a = a->next;
        }
        while (b != NULL) {
            --length;
            b = b->next;
        }
        
        a = headA;
        b = headB;
        if (length > 0) {
            while (length--)
                a = a->next;
        }
        else if (length < 0) {
            length = -length;
            while (length--)
                b = b->next;
        }
        
        while (a) {
            if (a == b)
                return a;
            a = a->next;
            b = b->next;
        }
        return NULL;
    }
};
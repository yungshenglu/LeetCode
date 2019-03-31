#include <vector>

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
     * Concepts: Two Pointer
     */
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* p = head;
        vector<int> larger;
        while (p != NULL) {
            ListNode* q = p->next;
            while (q != NULL && q->val <= p->val)
                q = q->next;
            
            if (q == NULL)
                larger.push_back(0);
            else
                larger.push_back(q->val);
            p = p->next;
        }
        return larger;
    }
};
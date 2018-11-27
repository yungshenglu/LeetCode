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
     * Concepts: Output to Array
     * Use vector to store all nodes from the list and output the middle one
     */
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> list;
        while (head != NULL) {
            list.push_back(head);
            head = head->next;
        }
        return list[list.size() / 2];
    }
};
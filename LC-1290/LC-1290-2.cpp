using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    /**
     * Concepts: Arithmetic Approach
     * Formula: num = num * 2 + x
     */
    int getDecimalValue(ListNode *head)
    {
        int val = 0;
        ListNode *curr = head;
        while (curr != nullptr)
        {
            val = val * 2 + curr->val;
            curr = curr->next;
        }
        return val;
    }
};
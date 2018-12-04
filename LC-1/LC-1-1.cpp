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
     * Concepts: Brute Force
     * Find out each pair of element in the list that sum is equal to target
     */
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == target - nums[j]) {
                    return vector<int>{i, j};
                }
            }
        }
        return vector<int>{};
    }
};
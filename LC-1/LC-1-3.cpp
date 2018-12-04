#include <vector>
#include <map>

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
     * Concepts: One-pass Approach
     * Modify from two-pass approach. Just find out the satisfied value in one-pass
     * 1. Find out the satisfied value in each iteration
     * 2. If not found, then insert into hash table
     */
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            map<int, int>::iterator it = hash.find(target - nums[i]);
            if (it != hash.end() && it->second != i)
                return vector<int>{i, it->second};
            hash[nums[i]] = i;
        }
        return vector<int>{};
    }
};
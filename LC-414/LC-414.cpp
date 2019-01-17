#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     * Use threee variables to store the top three maximum number in the array
     */
    int thirdMax(vector<int>& nums) {
        int a = nums[0], b = nums[0], c = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > a) {
                c = b;
                b = a;
                a = nums[i];
            }
            else if (a != nums[i] && (nums[i] > b || a == b)) {
                c = b;
                b = nums[i];
            }
            else if ((a != nums[i] && b != nums[i]) && (nums[i] > c || c == b || c == a))
                c = nums[i];
        }
        return (a > b && b > c) ? c : a;
    }
};
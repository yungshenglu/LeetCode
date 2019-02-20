#include <map>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Revert Number
     * 1. Let a revert number store the digit from the left to right
     * 2. When the revert number is greater than the original number, then determine whether it is palindrome
     */ 
    bool isPalindrome(int x) {
        if (x < 0 || x % 10 == 0 && x != 0)
            return false;
        
        int revert = 0;
        while (x > revert) {
            revert = revert * 10 + (x % 10);
            x /= 10;
        }
        return (x == revert || x == revert / 10);
    }
};
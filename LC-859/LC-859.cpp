#include <map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     * 1. If A.length() != B.length() or A.length() less than 2, return false
     * 2. For A == B only if there are duplicate characters
     * 3. Scan from right and left and then swap to check whether there are buddy
     */
    bool buddyStrings(string A, string B) {
        if (A.length() != B.length() || A.length() < 2)
            return false;
        
        map<char, int> hash;
        bool isDuplicate = false;
        for (int i = 0; i < A.length(); ++i) {
            if (++hash[A[i]] > 1) {
                isDuplicate = true;
                break;
            }
        }
        
        if (A == B)
            return isDuplicate;
        
        int i = 0, j = A.length() - 1;
        while (i < A.length() - 1 && A[i] == B[i])
            ++i;
        while (j > 0 && A[j] == B[j])
            --j;
        swap(A[i], A[j]);
        return (A == B);
    }
};
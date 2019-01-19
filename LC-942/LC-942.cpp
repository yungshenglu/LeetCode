#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Ad Hoc
     * 1. If S[0] == 'I', we can always put 0 as the first element
     *    If S[0] == 'D', we can always put N as the first element
     * 2. Keep track of the smallest and largest element we haven't placed. 
     *    * If S[i] == 'I', place the small element
     *    * otherwise place the large element
     */
    vector<int> diStringMatch(string S) {
        vector<int> A(S.length() + 1);
        int low = 0, high = S.length();
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] == 'I')
                A[i] = low++;
            else
                A[i] = high--;
        }
        A[S.length()] = low;
        return A;
    }
};
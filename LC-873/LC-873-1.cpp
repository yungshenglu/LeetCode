#include <algorithm>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force with Set
     * 1. For each starting pair A[i], A[j], we maintain the next expected value y = A[i] + A[j] and the previously seen largest value x = A[j]. 
     * 2. If y is in the array, then we can then update these values (x, y) -> (y, x + y).
     * 3. Also, because subsequences are only fibonacci-like if they have length 3 or more, we must perform the check ans >= 3 ? ans : 0 at the end.
     */
    int lenLongestFibSubseq(vector<int>& A) {
        int N = A.size();
        set<int> S(A.begin(), A.end());
        
        int length = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int x = A[j], y = A[i] + A[j];
                int currLength = 2;
                while (S.find(y) != S.end()) {
                    int z = x + y;
                    x = y;
                    y = z;
                    length = max(length, ++currLength);
                }
            }
        }
        return (length >= 3) ? length : 0;
    }
};
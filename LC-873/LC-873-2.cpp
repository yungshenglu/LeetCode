#include <algorithm>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Dynamic Programming
     * 1. Think of two consecutive terms A[i], A[j] in a fibonacci-like subsequence as a single node (i, j), 
     *    and the entire subsequence is a path between these consecutive nodes.
     * 2. For example, with the fibonacci-like subsequence (A[1] = 2, A[2] = 3, A[4] = 5, A[7] = 8, A[10] = 13), 
     *    we have the path between nodes (1, 2) <-> (2, 4) <-> (4, 7) <-> (7, 10).
     */
    int lenLongestFibSubseq(vector<int>& A) {
        int N = A.size();
        map<int, int> index;
        for (int i = 0; i < N; ++i)
            index[A[i]] = i;
        
        map<int, int> longest;
        int length = 0;
        for (int j = 0; j < N; ++j) {
            for (int i = 0; i < j; ++i) {
                if (A[j] - A[i] < A[i] && index.count(A[j] - A[i])) {
                    int k = index[A[j] - A[i]];
                    longest[i * N + j] = longest[k * N + i] + 1;
                    length = max(length, longest[i * N + j] + 2);
                }
            }
        }
        return (length >= 3) ? length : 0;
    }
};
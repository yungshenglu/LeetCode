#include <iostream>

#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     * 1. Sort all elements in the list
     * 2. The repeated element will be sorted continuously
     */
    int repeatedNTimes(vector<int>& A) {
        sort(A.begin(), A.end());
        for (int i = 1; i < A.size(); ++i) {
            if (A[i - 1] == A[i])
                return A[i];
        }
    }
};
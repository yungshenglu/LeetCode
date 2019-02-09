#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Math Approach
     * 1. If the operation array is empty, return (m * n)
     * 2. The count of the maximum integers is min(ops[i][0], ops[i][1])
     */
    int maxCount(int m, int n, vector< vector<int> >& ops) {
        if (ops.size() == 0)
            return (m * n);
        
        int a = INT_MAX, b = INT_MAX;
        for (int i = 0; i < ops.size(); ++i) {
            a = min(a, ops[i][0]);
            b = min(b, ops[i][1]);
        }
        return (a * b);
    }
};
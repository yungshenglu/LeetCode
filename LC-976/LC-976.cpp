#include <vector>
#include <algorithm>

#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting
     * 1. Sort all lengths in decreasing order
     * 2. Find the first 3 length that can form a triangle
     */
    int largestPerimeter(vector<int>& A) {
        int x = 0, y = 1, z = 2;
        bool isTriangle = false;

        sort(A.begin(), A.end(), compare);
        for (int i = 0; i + 2 < A.size(); ++i) {
            x = i;
            y = i + 1;
            z = i + 2;
            if (A[y] + A[z] > A[x]) {
                isTriangle = true;
                break;
            }
        }
        
        if (isTriangle)
            return A[x] + A[y] + A[z];
        return 0;
    }

private:
    bool static compare(int a, int b) {
        if (a > b)
            return true;
        return false;
    }
};
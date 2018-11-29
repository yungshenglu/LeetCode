#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     * 1. Use floor division to iterate each row in the image
     * 2. Use XOR 1 to flip each pixel in the row
     */
    vector< vector<int> > flipAndInvertImage(vector< vector<int> >& A) {
        int c = A[0].size();
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < (c + 1) / 2; ++j) {
                int tmp = A[i][j] ^ 1;
                A[i][j] = A[i][c - 1 - j] ^ 1;
                A[i][c - 1 - j] = tmp;
            }
        }
        return A;
    }
};
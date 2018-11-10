#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    /*
     * Concepts:
     * 1. Create a queue to store all elements in the matrix
     * 2. Reshape the matrix with element in the queue
     */
    vector< vector<int> > matrixReshape(vector< vector<int> >& nums, int r, int c) {
        int orig_r = nums.size(), orig_c = nums[0].size(), orig_size = orig_r * orig_c;
        
        if (r * c != orig_size)
            return nums;
        else {
            queue<int> que;
            for (int i = 0; i < orig_r; ++i) {
                for (int j = 0; j < orig_c; ++j)
                    que.push(nums[i][j]);
            }
            
            vector< vector<int> > reshape(r);
            for (int i = 0; i < r; ++i) {
                reshape[i] = vector<int>(c);
                for (int j = 0; j < c; ++j) {
                    reshape[i][j] = que.front();
                    que.pop();
                }
            }
            
            return reshape;
        }
    }
};
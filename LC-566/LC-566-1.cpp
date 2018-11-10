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
        if (nums.size() == 0 || r * c != nums.size() * nums[0].size())
            return nums;
        else {
            queue<int> que;
            for (int i = 0; i < nums.size(); ++i) {
                for (int j = 0; j < nums[0].size(); ++j)
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
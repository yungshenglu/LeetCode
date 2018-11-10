#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * 1. Use division to find out the number of row after reshaping
     * 2. Use modules to find out the number of column after reshaping
     */
    vector< vector<int> > matrixReshape(vector< vector<int> >& nums, int r, int c) {    
        if (nums.size() == 0 || r * c != nums.size() * nums[0].size())
            return nums;
        else {
            vector< vector<int> > reshape(r);
            int count = 0;
            for (int i = 0; i < nums.size(); ++i) {
                reshape[0] = vector<int>(c);
                for (int j = 0; j < nums[i].size(); ++j) {
                    reshape[count / c][count % c] = nums[i][j];
                    ++count;
                }
            }
            
            return reshape;
        }
    }
};
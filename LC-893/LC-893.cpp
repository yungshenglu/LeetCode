#include <vector>
#include <set>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Counting
     * 1. Count each string by sum up the mod 2 of each character
     * 2. Insert the unique summation of mod 2 into set
     * 3. Return the size of the set
     */ 
    int numSpecialEquivGroups(vector<string>& A) {
        set<string> group;
        for (size_t i = 0; i < A.size(); ++i) {
            vector<int> count(52, 0);
            for (size_t j = 0; j < A[i].length(); ++j)
                ++count[A[i][j] - 'a' + 26 * (j % 2)];
            ostringstream oss;
            for (size_t j = 0; j < count.size(); ++j)
                oss << count[j];
            group.insert(oss.str());
        }
        return group.size();
    }
};
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Adjacent Matrix
     * 1. Create a adjacent matrix to store the relationship between all people
     * 2. Follow the rules to find out the town judge
     */
    int findJudge(int N, vector< vector<int> >& trust) {
        vector< vector<bool> > relation;
        vector<bool> row(N + 1, false);
        for (int i = 0; i < N + 1; ++i)
            relation.push_back(row);
        
        for (int i = 0; i < trust.size(); ++i)
            relation[trust[i][0]][trust[i][1]] = true;
        
        vector<int> candidate;
        for (int j = 1; j < N + 1; ++j) {
            bool isJudge = true;
            for (int i = 1; i < N + 1; ++i) {
                if (!relation[i][j] && i != j) {
                    isJudge = false;
                    break;
                }
            }
            if (isJudge)
                candidate.push_back(j);
        }
        
        int judge = -1;
        for (int i = 0; i < candidate.size(); ++i) {
            bool isJudge = true;
            for (int j = 1; j < N + 1; ++j) {
                if (relation[candidate[i]][j]) {
                    isJudge = false;
                    break;
                }
            }
            if (isJudge)
                judge = candidate[i];
        }
        return judge;
    }
};
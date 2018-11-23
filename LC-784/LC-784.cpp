#include <vector>
#include <string>

using namespace std;

class Solution {
    /**
     * Concepts: DFS
     * 1. Use Depth-First Searching (DFS) to find out all possible result
     * 2. In each iteration, use bit opreration for transfering between lowercase and uppercase
     *    uppercase = lowercase XOR 32
     *    lowercase = uppercase XOR 32
     */
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> result;
        DFS(S, 0, result);
        return result;
    }

private:
    void DFS(string& S, int i, vector<string>& result) {
        // Push back the current possible result
        if (i == S.length()) {
            result.push_back(S);
            return;
        }
        
        // If the character is number, then pass 
        DFS(S, i + 1, result);
        if (!isalpha(S[i]))
            return;
        
        // Transfer between lowercase and uppercase
        S[i] ^= (1 << 5);
        DFS(S, i + 1, result);
    }
};
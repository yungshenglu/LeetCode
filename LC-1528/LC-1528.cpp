#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Sorting Pair-Vector
     * 1. Use pair-vector to store each character and it's index
     * 2. Sorting and concatenate to new string
     */
    string restoreString(string s, vector<int>& indices) {
        vector< pair<char, int> > pairs;
        for (int i = 0; i < indices.size(); ++i) {
            pairs.push_back(make_pair(s[i], indices[i]));
        }

        // Sorting
        sort(pairs.begin(), pairs.end(), compare);

        // Concatenation
        string result = "";
        for (int i = 0; i < pairs.size(); ++i) {
            result += pairs[i].first;
        }
        return result;
    }

private:
    static bool compare(pair<char, int> a, pair<char, int> b) {
        return a.second < b.second;
    }
};
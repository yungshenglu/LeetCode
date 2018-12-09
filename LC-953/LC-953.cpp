#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     */
     bool isAlienSorted(vector<string>& words, string order) {
        for (int i = 0; i < words.size() - 1; ++i) {
            int a = 0, b = 0;
            while (a < words[i].length() && b < words[i + 1].length()) {
                if (order.find(words[i][a]) > order.find(words[i + 1][b]))
                    return false;
                else if (order.find(words[i][a]) < order.find(words[i + 1][b]))
                    break;
                else {
                    ++a;
                    ++b;
                }
            }
            if (a == words[i].length() && b != words[i + 1].length())
                return true;
            else if (a != words[i].length() && b == words[i + 1].length())
                return false;
        }
        return true;
    }
};
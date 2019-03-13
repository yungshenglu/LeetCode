#include <set>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    /**
     * Concepts: String
     */
    string toGoatLatin(string S) {
        set<char> vowel({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
        istringstream iss(S);
        string res, w;
        int index = 1;
        while (iss >> w) {
            res += ' ' + ((vowel.count(w[0]) == 1) ? w : w.substr(1) + w[0]) + "ma";
            for (int j = 0; j < index; ++j)
                res += 'a';
            ++index;
        }
        return res.substr(1);
    }
};
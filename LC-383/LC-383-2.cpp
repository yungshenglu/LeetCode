#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Extra Space
     */
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);
        for (size_t i = 0; i < magazine.length(); ++i)
            ++count[magazine[i] - 'a'];
        for (size_t i = 0; i < ransomNote.length(); ++i) {
            if (count[ransomNote[i] - 'a'] == 0)
                return false;
            --count[ransomNote[i] - 'a'];
        }
        return true;
    }
};
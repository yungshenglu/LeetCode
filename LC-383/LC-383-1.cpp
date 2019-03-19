#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Iteration
     */
    bool canConstruct(string ransomNote, string magazine) {
        for (size_t i = 0; i < ransomNote.length(); ++i) {
            if (magazine.find(ransomNote[i]) == string::npos)
                return false;
            magazine.erase(magazine.begin() + magazine.find(ransomNote[i]));
        }
        return true;
    }
};
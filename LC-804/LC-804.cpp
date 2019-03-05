#include <vector>
#include <set>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Hash
     * Create a hash table to store the unique pattern of morse code
     */
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> morseCode;
        for (size_t i = 0; i < words.size(); ++i) {
            string morse;
            for (size_t j = 0; j < words[i].length(); ++j)
                morse += morseTable[words[i][j] - 'a'];
            morseCode.insert(morse);
        }
        return morseCode.size();
    }
    
private:
    vector<string> morseTable = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
};
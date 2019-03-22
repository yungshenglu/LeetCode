#include <vector>
#include <string>
#include <set>
#include <map>
#include <cctype>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Counting
     * 1. Make the word in banned into a set
     * 2. Create a hash table to count the frequency of each word in the paragraph
     */
    string mostCommonWord(string paragraph, vector<string>& banned) {
        set<string> bannedSet;
        for (size_t i = 0; i < banned.size(); ++i)
            bannedSet.insert(banned[i]);
        
        map<string, int> count;
        string word = "", result = "";
        int freq = 0;
        for (size_t i = 0; i <= paragraph.length(); ++i) {
            if (isalpha(paragraph[i]))
                word += tolower(paragraph[i]);
            else if (word.length()) {
                string finalWord = word;
                if (bannedSet.find(finalWord) == bannedSet.end()) {
                    if (count.find(finalWord) != count.end())
                        ++count[finalWord];
                    else
                        count[finalWord] = 1;
                    if (count[finalWord] > freq) {
                        result = finalWord;
                        freq = count[finalWord];
                    }
                }
                word = "";
            }
        }
        return result;
    }
};
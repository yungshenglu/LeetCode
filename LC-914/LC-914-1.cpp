#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Brute Force
     * 1. Count the deck of N cards into a hash table
     * 2. Divide the deck of N cards into K piles of X cards each, we must have N % X == 0
     */
    bool hasGroupsSizeX(vector<int>& deck) {
        // Count the deck of N cards into a hash table
        map<int, int> count;
        map<int, int>::iterator it;
        for (int i = 0; i < deck.size(); ++i) {
            it = count.find(deck[i]);
            if (it == count.end())
                count[deck[i]] = 1;
            else
                ++count[deck[i]];
        }
        
        vector<int> values;
        for (it = count.begin(); it != count.end(); ++it)
            values.push_back(it->second);
        
        // Divide the deck of N cards into K piles of X cards each
        for (int n = 2; n <= deck.size(); ++n) {
            if (deck.size() % n == 0) {
                bool isDivided = true;
                for (int i = 0; i < values.size() && isDivided; ++i) {
                    if (values[i] % n != 0)
                        isDivided = false;
                }
                if (!isDivided)
                    continue;
                return true;
            }
        }
        return false;
    }
};
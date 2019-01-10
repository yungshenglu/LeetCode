#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Greatest Common Divisor (GCD)
     * 1. Count the deck of N cards into a hash table
     * 2. Find out the GCD in K kinds of card
     */
    bool hasGroupsSizeX(vector<int>& deck) {
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
        
        int g = values[0];
        for (int i = 1; i < values.size(); ++i)
            g = gcd(g, values[i]);
        return (g >= 2);
    }
private:
    int gcd(int a, int b) {
        for (int g = min(a, b); g > 1; --g) {
            if (a % g == 0 && b % g == 0)
                return g;
        }
        return 1;
    }
};
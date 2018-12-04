#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Simulation
     * 1. Sort the deck
     * 2. Push the maximum value in deck in front of deque
     * 3. If the deck is not empty, move the last of value in deque to the front of deque
     * 4. Repeat step 2 and 3 
     */
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> result;
        sort(deck.begin(), deck.end());
        for (int i = deck.size() - 1; i >= 0; --i) {
            result.push_front(deck[i]);
            if (result.back() && i > 0) {
                int tmp = result.back();
                result.pop_back();
                result.push_front(tmp);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};
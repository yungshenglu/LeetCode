#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Group by Zero
     * 1. In a group of K adjacent empty seats between two people, the answer is (K + 1) / 2
     * 2. Algorithms
     *    For each group of K empty seats between two people, we can take into account the candidate answer (K + 1) / 2
     *    For groups of empty seats between the edge of the row and one other person, the answer is K, and we should take into account those answers too
     */
    int maxDistToClosest(vector<int>& seats) {
        int maxDistance = 0, distance = 0;
        for (int i = 0; i < seats.size(); ++i) {
            if (seats[i])
                distance = 0;
            else {
                ++distance;
                maxDistance = (maxDistance < (distance + 1) / 2) ? (distance + 1) / 2 : maxDistance;
            } 
        }
        for (int i = 0; i < seats.size(); ++i) {
            if (seats[i]) {
                maxDistance = (maxDistance < i) ? i : maxDistance;
                break;
            }
        }
        for (int i = seats.size() - 1; i >= 0; --i) {
            if (seats[i]) {
                maxDistance = (maxDistance < seats.size() - 1 - i) ? (seats.size() - 1 - i) : maxDistance;
                break;
            }
        }
        return maxDistance;
    }
};
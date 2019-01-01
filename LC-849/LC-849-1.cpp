#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Next Array
     * 1. left[i] is the distance from seat i to the closest person sitting to the left of i
     * 2. right[i] is the distance from seat i to the closest persion sitting to the right of i
     * 3. Algorithms
     *    If the seat is empty, then left[i] = left[i - 1] + 1 and right[i] = right[i + 1] + 1
     *    If the seat is full, then left[i] = 0 and right[i] = 0
     * 4. Return the minimum between left[i] and right[i]
     */
    int maxDistToClosest(vector<int>& seats) {
        vector<int> left(seats.size(), seats.size());
        vector<int> right(seats.size(), seats.size());
        for (int i = 0; i < seats.size(); ++i) {
            if (seats[i])
                left[i] = 0;
            else if (i > 0)
                left[i] = left[i - 1] + 1;
        }
        
        for (int i = seats.size() - 1; i >= 0; --i) {
            if (seats[i])
                right[i] = 0;
            else if (i < seats.size() - 1)
                right[i] = right[i + 1] + 1;
        }
        
        int maxDistance = 0;
        for (int i = 0; i < seats.size(); ++i) {
            if (seats[i] == 0)
               maxDistance = (maxDistance < min(left[i], right[i])) ? min(left[i], right[i]) : maxDistance;
        }
        return maxDistance;
    }
};
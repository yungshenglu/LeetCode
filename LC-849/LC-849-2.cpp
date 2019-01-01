#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two Pointers
     * 1. prev: the filled seat at or to the left
     * 2. next: the filled seat at or to the right
     */
    int maxDistToClosest(vector<int>& seats) {
        int maxDistance = 0, prev = -1, next = 0;
        for (int i = 0; i < seats.size(); ++i) {
            if (seats[i])
                prev = i;
            else {
                while (next < seats.size() && seats[next] == 0 || next < i)
                    ++next;
                int left = (prev == -1) ? seats.size() : (i - prev);
                int right = (next == seats.size()) ? seats.size() : next - i;
                maxDistance = (maxDistance < min(left, right)) ? min(left, right) : maxDistance;
            }
        }
        return maxDistance;
    }
};
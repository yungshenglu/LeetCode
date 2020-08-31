#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        /**
         * Concepts: Brute Force
         */
        int rateLen = rating.size(), teams = 0;
        teams += bruteForce(rateLen, rating);
        reverse(rating.begin(), rating.end());
        teams += bruteForce(rateLen, rating);
        return teams;
    }

    int bruteForce(int n, vector<int>& rating) {
        int count = 0;
        for(int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                if (rating[i] < rating[j]) {
                    for (int k = j + 1; k < n; ++k) {
                        if (rating[j] < rating[k])
                            ++count;
                    }
                }
            }
        }
        return count;
    }
};
#include <cmath>
#include <vector>
#include <algorithm>

#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Diatance Formula
     * 1. Calculate the distance to the origin for each point
     * 2. Sorting
     */
    vector< vector<int> > kClosest(vector< vector<int> >& points, int K) {
        sort(points.begin(), points.end(), compare);
        vector< vector<int> > Kcloset;
        for (int i = 0; i < K; ++i)
            Kcloset.push_back(points[i]);
        return Kcloset;
    }

private:
    bool static compare(vector<int> a, vector<int> b) {
        double d1 = sqrt(pow(abs(a[0]), 2) + pow(abs(a[1]), 2));
        double d2 = sqrt(pow(abs(b[0]), 2) + pow(abs(b[1]), 2));
        if (d1 < d2)
            return true;
        return false;
    }
};
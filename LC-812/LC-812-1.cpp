#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Shoelace Formula
     */
    double largestTriangleArea(vector< vector<int> >& points) {
        double area = 0;
        for (int i = 0; i < points.size(); ++i) {
            for (int j = i + 1; j < points.size(); ++j) {
                for (int k = j + 1; k < points.size(); ++k)
                    area = max(area, triangleArea(points[i], points[j], points[k]));
            }
        }
        return area;
    }

private:
    // Implement Shoelace Formula
    double triangleArea(vector<int> A, vector<int> B, vector<int> C) {
        return abs(A[0] * B[1] + B[0] * C[1] + C[0] * A[1] - A[1] * B[0] - B[1] * C[0] - C[1] * A[0]) * 0.5;
    }
};
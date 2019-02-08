#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Heron's Formula
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
    // Implement Heron's Formula
    double triangleArea(vector<int> A, vector<int> B, vector<int> C) {
        double a = length(A, B), b = length(B, C), c = length(C, A), s = 0.5 * (a + b + c);
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // Compute the length of each side in the triangle
    double length(vector<int> A, vector<int> B) {
        return sqrt(abs(A[0] - B[0]) * abs(A[0] - B[0]) + abs(A[1] - B[1]) * abs(A[1] - B[1]));
    }
};
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts:
     * Naive Approach
     */
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; ++i) {
            if (i % 15 == 0)
                result.push_back("FizzBuzz");
            else if (i % 5 == 0 && i % 3 != 0)
                result.push_back("Buzz");
            else if (i % 3 == 0 && i % 5 != 0)
                result.push_back("Fizz");
            else
                result.push_back(to_string(i));
        }
        return result;
    }
};
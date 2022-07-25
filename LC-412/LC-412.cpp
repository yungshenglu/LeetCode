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
            cout << i << endl;
            string temp = "";
            if (i % 3 == 0) {
                temp += "Fizz";
            }
            if (i % 5 == 0) {
                temp += "Buzz";
            }
            result.push_back(temp != "" ? temp : to_string(i));
        }
        return result;
    }
};
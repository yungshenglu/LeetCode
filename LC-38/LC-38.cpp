#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Iteration
     */ 
    string countAndSay(int n) {
        vector<string> say(30, "");
        say[0] = "1";
        say[1] = "11";
        
        if (n < 3)
            return say[n - 1];
        else {
            for (int i = 2; i < n; ++i) {
                string count = say[i - 1] + "0", curr = "";
                int sum = 1;
                for (int j = 0; j < count.length() - 1; ++j) {
                    if (count[j] == count[j + 1])
                        ++sum;
                    else {
                        curr += ('0' + sum);
                        curr += count[j];
                        sum = 1;
                    }
                }
                say[i] = curr;
            }
            return say[n - 1];
        }
    }
};
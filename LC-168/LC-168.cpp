#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Naive Approach
     */
    string convertToTitle(int n) {  
        string title = "";
        while (n > 0) {
            char ch = (--n % 26) + 'A';
            title = ch + title;
            n /= 26;
        }
        return title;
    }
};
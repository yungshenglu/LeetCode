#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    /**
     * Concepts: 
     * 1. Find out the first non-space character
     * 2. Get the sign of the value if there exist
     * 3. Implement atoi with considering the limit of integer
     * 4. Remember to add the sign into value
     */
    int myAtoi(string str) {
        int k = str.find_first_not_of(' ');
        if (k == string::npos) return 0;
        vector<char> cstr(str.c_str(), str.c_str() + str.size() + 1);

        // Add sign label
        int label = 1;
        if ((cstr[k] < '0' || cstr[k] > '9') && cstr[k] != '-' && cstr[k] != '+')
            return 0;
        else if (cstr[k] == '-' || cstr[k] == '+')
            label = (cstr[k++] == '-') ? -1 : 1;
        
        // Transfer to integer
        long long value = 0;
        while (k < cstr.size() && (cstr[k] >= '0' && cstr[k] <= '9')) {
            value = value * 10 + (cstr[k] - '0');
            if (value * label > INT_MAX)
                return INT_MAX;
            else if (value * label < INT_MIN)
                return INT_MIN;
            ++k;
        }
        
        return value * label;
    }
};
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: String Replace
     */
    string defangIPaddr(string address) {
        for (int i = address.length() - 1; i >= 0; --i) {
            if (address[i] == '.')
                address.replace(i, 1, "[.]");
        }
        return address;
    }
};
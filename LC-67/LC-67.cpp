#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Simulation
     * 1. Determine which length of the string is longest
     * 2. Insert '0' to the shortest string until the length of two string is identical
     * 3. Simulate the process of addition
     */ 
    string addBinary(string a, string b) {
        if (a.length() < b.length())
            swap(a, b);
        
        while (b.length() < a.length())
            b = '0' + b;
        
        int carry = 0;
        for (int i = a.length() - 1; i >= 0; --i) {
            if (a[i] == '1' && b[i] == '1') {
                a[i] = (carry) ? '1' : '0';
                carry = 1;
            }
            else if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) {
                a[i] = (carry) ? '0' : '1';
                carry = (carry) ? 1 : 0;
            }
            else {
                a[i] = (carry) ? '1' : '0';
                carry = (carry) ? --carry : carry;
            }
        }
        a = (carry) ? '1' + a : a;
        return a;
    }
};
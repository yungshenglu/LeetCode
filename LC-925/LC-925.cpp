#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Two Pointer
     */
    bool isLongPressedName(string name, string typed) {
        int index = 0;
        for (size_t i = 0; i < name.length(); ++i) {
            if (index == typed.length())
                return false;
            if (typed[index] != name[i]) {
                if (index == 0 || typed[index - 1] != typed[index])
                    return false;
                char curr = typed[index];
                while (index < typed.length() && typed[index] == curr)
                    ++index;
                if (index == typed.length() || typed[index] != name[i])
                    return false;
            }
            ++index;
        }
        return true;
    }
};
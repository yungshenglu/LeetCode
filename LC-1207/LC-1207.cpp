#include <map>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Use Hash Table and Set
     */
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> occur;
        for (int i = 0; i < arr.size(); ++i) {
            if (occur.count(arr[i]))
                ++occur[arr[i]];
            else
                occur[arr[i]] = 1;
        }
        set<int> uniqueOccur;
        for (map<int, int>::iterator it = occur.begin(); it != occur.end(); ++it) {
            if (uniqueOccur.find(it->second) != uniqueOccur.end())
                return false;
            uniqueOccur.insert(it->second);
        }
        return true;
    }
};
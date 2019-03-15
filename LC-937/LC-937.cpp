#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Custom Sorting
     * 1. Partition the input array into digit-logs and letter-logs
     * 2. Sort the sub-array of letter-logs to make sure the order of digit-logs is remain orignal
     */
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string>::iterator bound = stable_partition(logs.begin(), logs.end(), isAlphaLog);
        sort(logs.begin(), bound, compare);
        return logs;
    }

private:
    static bool compare(string& a, string& b) {
        return a.substr(a.find(' ')) < b.substr(b.find(' '));
    }
    
    static bool isAlphaLog(string& log) {
        return isalpha(log.back());
    }
};
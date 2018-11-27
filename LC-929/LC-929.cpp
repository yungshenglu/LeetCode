#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
    /**
     * Concepts: Canonical Form
     * 1. Use set to store the unique email address
     * 2. Find out the character '@' to split the address into local and domain
     * 3. For the local part, find out the character '+' and ignore the following string
     * 4. For the local part, find out the character '.' and replace it into ''
     * 4. Insert the final address combined with local and domain
     * 5. The size of the set will be the number of unique address
     */
public:
    int numUniqueEmails(vector<string>& emails) {
        if (emails.size() == 0)
            return 0;
        
        set<string> emailsList;
        for (int i = 0; i < emails.size(); ++i) {
            int c = emails[i].find("@");
            string local = emails[i].substr(0, c);
            string domain = emails[i].substr(c);
            local = local.substr(0, local.find("+"));
            while (local.find(".") != string::npos)
                local.replace(local.find("."), 1, "");
            emailsList.insert(local + domain);
        }
        return emailsList.size();
    }
};
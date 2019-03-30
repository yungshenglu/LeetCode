#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    /**
     * Concepts: Read and Write Heads
     * 1. Let anchor be the start position of the contiguous group of characters we are currently reading
     * 2. Read from left to right
     *    Must be at the end of the block 
     *    - When we are at the last character
     *    - When the next character is different from the current character
     * 3. When we are at the end of a group, we will write the result of that group down using our write head 
     *    - chars[anchor] = the correct character
     *    - The length (if greater than 1) will be (read - anchor + 1)
     *    - Write the digits of that number to the array
     */
    int compress(vector<char>& chars) {
        int anchor = 0, write = 0;
        for (int i = 0; i < chars.size(); ++i) {
            if (i + 1 == chars.size() || chars[i + 1] != chars[i]) {
                chars[write++] = chars[anchor];
                if (i > anchor) {
                    string count = to_string(i - anchor + 1);
                    for (size_t n = 0; n < count.length(); ++n)
                        chars[write++] = count[n];
                }
                anchor = i + 1;
            }
        }
        return write;
    }
};
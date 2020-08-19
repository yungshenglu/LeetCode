class Solution {
public:
    /**
     * Concepts: Use stack
     * 1. Push all character s into stack
     * 2. Pop up the stack if character is matching in top of stack in reverse order
     * 3. s is subsequence when stack is empty
     */
    bool isSubsequence(string s, string t) {
        int sLen = s.size(), tLen = t.size();
        if (sLen == 0) return true;
        
        stack<char> subSeq;
        for (int i = 0; i < sLen; ++i)
            subSeq.push(s[i]);
        
        for (int i = tLen - 1; i >= 0; --i) {
            if (t[i] == subSeq.top()) subSeq.pop();
            if (subSeq.empty()) return true;
        }
        return (subSeq.empty());
    }
};
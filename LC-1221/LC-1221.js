/**
 * @param {string} s
 * @return {number}
 */
var balancedStringSplit = function(s) {
    /**
     * Concepts: Naive Approach
     */

    let countR = 0, countL = 0, count = 0;
    for (let i = 0; i < s.length; ++i) {
        if (countR !== 0 && countR === countL) {
            countR = countL = 0;
            ++count;
        }
        
        if (s[i] === 'R')
            ++countR;
        else if (s[i] === 'L')
            ++countL;
    }
    
    if (countR === countL) ++count;
    return count;
};
/**
 * Concepts: Naive Approach
 */

function balancedStringSplit(s: string): number {
    let countR: number = 0, countL: number = 0, count: number = 0;
    for (let i: number = 0; i < s.length; ++i) {
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
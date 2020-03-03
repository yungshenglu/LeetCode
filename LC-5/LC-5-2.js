/**
 * @param {string} s
 * @return {string}
 */

var longestPalindrome = function(s) {
    /**
     * Concepts: Manacher's algorithm (DP)
     * 1. Use a useless character to make the length of string be odd
     * 2. Think of the concept of mirror to find the symmetry character for each character
     * 3. Remember to remove the useless character before return the result
     * [Ref] http://www.csie.ntnu.edu.tw/~u91029/Palindrome.html#3
     */
    
    let strLength = s.length;
    if (strLength < 2) {
        return s;
    }
    
    // Preprocess for Manacher's algorithm
    let ref = "#".repeat(2 * strLength + 1);
    for (let i = 0; i < strLength; ++i) {
        let index = 2 * i + 1;
        ref = ref.substr(0, index) + s[i] + ref.substr(index + 1);
    }
    
    // Manacher's algorithm
    let maxRadius = 1, maxIndex = 1;
    for (let i = 0; i < ref.length; ++i) {
        let radius = 1;
        while (i - radius >= 0 && i + radius < ref.length && ref[i - radius] === ref[i + radius]) {
            ++radius;
        }
        if (radius > maxRadius) {
            maxRadius = radius;
            maxIndex = i;
        }
    }
    --maxRadius;
    
    // Remove the character '#'
    let result = ref.substr(maxIndex - maxRadius, maxRadius * 2 + 1);
    result = result.replace(/#/g, '');
    return result;
};
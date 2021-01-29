/**
 * @param {number} num
 * @return {number}
 */
var maximum69Number  = function(num) {
    /**
     * Concepts: Number to String
     */
    
    let numStr = num.toString();
    for (let i = 0; i < numStr.length; ++i) {
        if (numStr[i] === '6') {
            return +(numStr.substring(0, i) + '9' + numStr.substring(i + 1));
        }
    }
    return num
};
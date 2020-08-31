/**
 * Concepts: Stringify
 */

function findNumbers(nums: number[]): number {
    let evenDigitNum: number = 0, numsLen: number = nums.length;
    
    for (let i: number = 0; i < numsLen; ++i) {
        let numStr: string = String(nums[i]);
        if (numStr.length % 2 === 0) ++evenDigitNum
    }
    return evenDigitNum
};
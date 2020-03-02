/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var twoSum = function(nums, target) {
    /**
     * Concepts: Brute Force
     * Find out each pair of element in the list that sum is equal to target
     */
    
    if (nums == null || nums.length === 0) {
        return nums;
    }
    for (let i = 0; i < nums.length - 1; ++i) {
        for (let j = i + 1; j < nums.length; ++j) {
            if (nums[i] + nums[j] == target) {
                return [i, j];
            }
        }
    }
    return {};
};
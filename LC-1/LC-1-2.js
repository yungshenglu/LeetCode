/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var twoSum = function(nums, target) {
    /**
     * Concepts: Two-pass Approach
     * 1. Use hash table to store the value and the index in the list
     * 2. Use "Map" to find out the satisfied value
     */

    if (nums == null || nums.length == 0) {
        return nums;
    }
    
    let hash = new Map();
    for (let i = 0; i < nums.length; ++i) {
        hash.set(nums[i], i);
    }
    
    for (let i = 0; i < nums.length; ++i) {
        let diff = tagret - nums[i];
        if (hash.has(diff) && hash.get(diff) !== i) {
            return [hash.get(diff), i];
        }
    }
    return {};
};
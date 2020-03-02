/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var twoSum = function(nums, target) {
    /**
     * Concepts: One-pass Approach
     * Modify from two-pass approach. Just find out the satisfied value in one-pass
     * 1. Find out the satisfied value in each iteration
     * 2. If not found, then insert into hash table
     */

    if (nums == null || nums.length == 0) {
        return nums;
    }
    
    let hash = new Map();
    for (let i = 0; i < nums.length; ++i) {
        let diff = target - nums[i];
        if (hash.has(diff) && hash.get(diff) !== i) {
            return [hash.get(diff), i];
        } else {
            hash.set(nums[i], i);
        }
    }
    return {};
};
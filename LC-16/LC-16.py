class Solution:
    '''
    Concepts: Two Pointers
    1. Sort the input array nums
    2. Make two pointers left and right at i + 1 and n - 1 respectively
    3. Check the sum of of nums[i] + nums[left] + nums[right] which is closest to the target
    '''
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()

        nLen = len(nums)
        result = nums[0] + nums[1] + nums[nLen - 1]
        for i in range(nLen - 2):
            left = i + 1
            right = nLen - 1
            
            while left < right:
                sums =  nums[i] + nums[left] + nums[right]
                if sums == target:
                    return sums
                
                if abs(sums - target) < abs(result - target):
                    result = sums
                
                if sums > target:
                    right -= 1
                else:
                    left += 1

        return result

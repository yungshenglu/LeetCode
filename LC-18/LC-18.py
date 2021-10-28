class Solution:
    '''
    Concepts: Two Pointers
    1. Sort the input array nums
    2. Make two pointers left and right at j + 1 and n - 1 respectively in nested loop
    3. Check the sum of of nums[i] + nums[j] + nums[left] + nums[right] which is closest to the target
    '''
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()

        nLen = len(nums)
        result = set()
        for i in range(nLen):
            for j in range(i + 1, nLen):
                left = j + 1
                right = nLen - 1

                while left < right:
                    total = nums[i] + nums[left] + nums[right] + nums[j]
                    if total > target:
                        right -= 1
                    elif total < target:
                        left += 1
                    else:
                        result.add(tuple([nums[i], nums[left], nums[right], nums[j]]))
                        left += 1
                        right -= 1

        return result

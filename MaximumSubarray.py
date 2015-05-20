class Solution:
    # @param {integer[]} nums
    # @return {integer}
    def maxSubArray(self, nums):
        maxEndingHere = maxSoFar = nums[0]
        
        for x in nums[1:]:
            maxEndingHere = max(x, maxEndingHere+x)
            maxSoFar = max(maxSoFar, maxEndingHere)
        
        return maxSoFar

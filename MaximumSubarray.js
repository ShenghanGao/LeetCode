/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    maxEndingHere = maxSoFar = nums[0];
    
    for (i=1; i<nums.length; ++i) {
        maxEndingHere = Math.max(nums[i], maxEndingHere+nums[i]);
        maxSoFar = Math.max(maxSoFar, maxEndingHere);
    }
    
    return maxSoFar;
};

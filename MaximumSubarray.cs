public class Solution {
    public int MaxSubArray(int[] nums) {
        int maxEndingHere, maxSoFar;
        maxEndingHere = maxSoFar = nums[0];
        
        for (int i=1; i<nums.Length; ++i) {
            maxEndingHere = Math.Max(nums[i], maxEndingHere+nums[i]);
            maxSoFar = Math.Max(maxSoFar, maxEndingHere);
        }
        
        return maxSoFar;
    }
}

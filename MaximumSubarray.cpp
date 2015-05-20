class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEndingHere, maxSoFar;
        maxEndingHere = maxSoFar = nums.at(0);
        
        for (int i=1; i<nums.size(); ++i) {
            maxEndingHere = max(nums.at(i), maxEndingHere+nums.at(i));
            maxSoFar = max(maxSoFar, maxEndingHere);
        }
        return maxSoFar;
    }
};

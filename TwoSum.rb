# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
    hm = Hash.new
    res = Array.new
    
    for i in 0..nums.length-1
        if !hm.has_key?(nums[i])
            hm[ target-nums[i] ] = i+1
        else
            res << hm[ nums[i] ] << i+1
            break
        end
    end
    
    return res
end

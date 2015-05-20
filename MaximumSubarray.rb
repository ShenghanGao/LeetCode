# @param {Integer[]} nums
# @return {Integer}
def max_sub_array(nums)
    max_ending_here = max_so_far = nums[0]
    
    for x in nums[1..-1]
        max_ending_here = [x, max_ending_here+x].max
        max_so_far = [max_so_far, max_ending_here].max
    end
    
    return max_so_far
end

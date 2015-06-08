# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val)
#         @val = val
#         @left, @right = nil, nil
#     end
# end

# @param {TreeNode} root
# @return {Integer}
def max_depth(root)
    if root == nil
        return 0
    end
    ld = max_depth(root.left)
    rd = max_depth(root.right)
    return ld >= rd ? 1 + ld : 1 + rd
end

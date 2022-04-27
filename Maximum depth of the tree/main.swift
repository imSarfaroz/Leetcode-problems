class Solution {
    func maxDepth(_ root: TreeNode?) -> Int {
         guard root != nil else {
        return 0
    }
    
    let left_height = maxDepth(root!.left)
    let right_heigh = maxDepth(root!.right)
    
    return max(left_height, right_heigh) + 1
    }
}
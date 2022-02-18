import UIKit

class Solution {
    func createTargetArray(_ nums: [Int], _ index: [Int]) -> [Int] {
        var arr = [Int]()

        for i in 0..<nums.count {
            arr.insert(nums[i], at:index[i])
        }
        return arr
    }
}
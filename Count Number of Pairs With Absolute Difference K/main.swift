import UIKit

class Solution {
    func countKDifference(_ nums: [Int], _ k: Int) -> Int {
        var count = 0
        
        for i in 0..<nums.count {
            for j in 0..<nums.count {
                if(nums[i] - nums[j] == k){
                    count+=1
                }
            }
        }
        return count
    }
}
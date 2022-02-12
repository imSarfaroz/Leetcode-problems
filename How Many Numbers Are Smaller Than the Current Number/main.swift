import UIKit

class Solution {
    func smallerNumbersThanCurrent(_ nums: [Int]) -> [Int] {
        var map = [Int: Int]()
        let sorted = nums.sorted()
        for(index, item) in sorted.enumerated() {
            if(map[item] == nil){
            map[item] = index
            }
        }
        
        var result = [Int]()
        for n in nums {
        result.append(map[n]!)
    }
        return result
}
}
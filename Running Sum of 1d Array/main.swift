import UIKit

class Solution {
    func runningSum(_nums: [Int]) -> [Int]{
        var n:[Int] = [Int]()
        var t = 0
        for i in nums{
            t += i
            n.append(t)
        }
        return n
    }
}

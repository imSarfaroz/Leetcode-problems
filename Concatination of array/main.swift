import UIkit

class Solution {
    func getConcatenation(_ nums: [Int]) -> [Int] {
        var n:[Int] = nums
        for i in nums{
            n.append(i)
        }
        return n
    }
}
class Solution {
    func maxProductDifference(_ nums: [Int]) -> Int {
        var num:[Int] = nums
        num.sort()
        
        var size = num.count
        return num[size - 1] * num[size - 2] - num[0] * num[1]
    }
}
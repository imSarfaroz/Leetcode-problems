class Solution {
    func arrayPairSum(_ nums: [Int]) -> Int {
        let arr = nums.sorted(by: <)
        var sum:Int = 0
        var i = 0
        
        while i < nums.count {
            sum += arr[i]
            i+=2
        }
        return sum
    }
}

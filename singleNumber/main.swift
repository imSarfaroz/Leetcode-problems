class Solution {
    func singleNumber(_ nums: [Int]) -> Int {
        var sum:Int = 0
        
        for i in 0..<nums.count {
            sum^=nums[0]
        }
        return sum
    }
}
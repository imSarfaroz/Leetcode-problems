class Solution {
    func arraySign(_ nums: [Int]) -> Int {
        var product:Int = 1
        
        for num in 0..<nums.count {
            if nums[num] == 0 {
                return 0
            }
            
            if nums[num] < 0 {
                product = product * -1
            }
        }
        
        return product
    }
}
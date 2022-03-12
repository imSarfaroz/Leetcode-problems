class Solution {
    func findGCD(_ nums: [Int]) -> Int {
        var max = nums.max()!
        var min = nums.min()!
        
        while max%min != 0 {
            let reminder = max % min
            max = min
            min = reminder
        }
        
        return min
    }
}
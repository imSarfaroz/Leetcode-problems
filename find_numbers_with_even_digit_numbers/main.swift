class Solution {
    func findNumbers(_ nums: [Int]) -> Int {
        var count:Int = 0;
        
        for num in nums {
            count += String(num).count % 2 == 0 ? 1 : 0
        }
        return count
    }
}

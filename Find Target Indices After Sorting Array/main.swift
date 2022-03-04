class Solution {
    func targetIndices(_ nums: [Int], _ target: Int) -> [Int] {
        var v = [Int]()
        var num = nums
        num.sort()
        
        for i in 0..<nums.count {
            if(target == num[i]) {
                v.append(i)
            }
        }
        return v
    }
}